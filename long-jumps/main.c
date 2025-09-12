#include <stdio.h>
#include <setjmp.h>

jmp_buf env;

void depth2(void)
{
    printf("Entering depth 2 \n");
    longjmp(env, 3490);         // Bail out
    printf("Leaving depth 2\n") // this won't happen
}

void depth1(void)
{
    printf("Entering depth 1\n");
    depth2();
    printf("Leaving depth 1\n"); // This won't happen
}

int main(void)
{
    switch (setjmp(env))
    {
    case 0:
        printf("Calling into functions, setjmp() returned 0\n");
        depth1();
        printf("Returned from functions\n"); // This won't happen
        break;

    case 3490:
        printf("Bailed back to main, setjmp() returned 3490\n");

    default:
        break;
    }
}
// results

// Calling into functions, setjmp() returned 0
// Entering depth 1
// Entering depth 2
// Bailed back to main, setjmp() returned 3490