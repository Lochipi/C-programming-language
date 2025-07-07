#include <stdio.h>

// auto
// static

// static on Block scope
void counter(void)
{
    static int count = 1; // Static variable retains its value between function calls ()

    printf("This has been called %d times.\n", count);

    count++;
}

int main(void)
{
    counter(); // "This has been called 1 time(s)"
    counter(); // "This has been called 2 time(s)"
    counter(); // "This has been called 3 time(s)"
}

// static on File scope
static int file_scope_var = 0; // This variable is only accessible within this file

// extern

// register

int register_example(void)
{
    register int a; // make "a" as fast to use as possible

    for (a = 0; a < 10; a++)
    {
        printf("%d\n", a);
    }
}