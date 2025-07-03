#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    for (int i = 0; i < 10; i++)
        printf("%d ", i); // OK: 'i' is declared in the for loop scope

    // printf("%d\n", i); // Error: 'i' is not declared in this scope

    for (int i = 0; i < 5; i++)
    {
        int i = 999; // Hides the i in the for-loop scope
        printf("%d\n", i);
    }
}