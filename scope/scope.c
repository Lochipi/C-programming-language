#include <stdio.h>
#include <stdlib.h>

int shared = 42; // File scope! Global variable, visible everywhere

void func1(void)
{
    shared += 100; // Now shared is 142
}

void func2(void)
{
    printf("%d\n", shared); // Prints 142, since func1 modified it
}

int main(void)
{
    int a = 12; // Local to outer block, but visible in inner block

    if (a == 12)
    {
        int b = 99;              // Local to innner block, not visible in outer block
        printf("%d %d\n", a, b); // OK: "12 99"
    }

    printf("%d\n", a); // OK: "12" we're still in a's scope

    // printf("%d\n", b); // Error: 'b' is not declared in this scope
}