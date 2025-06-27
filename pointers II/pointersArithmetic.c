#include <stdio.h>

// int a[5] = {11, 22, 33, 44, 55};

// int *p = a;
// int *p = &a[0]; // Or "int *p = a;" works just as well

// printf("First element: %d\n", *p); // Access the first element, 11
// Pointer arithmetic
// int second = *(p + 1); // Access the second element
// printf("Second element: %d\n", second);

// the above is same as
// printf("%d\n", *p);       // Prints 11
// printf("%d\n", *(p + 0)); // Prints 11

// because adding 0 to a pointer results in the same pointer.

int main(void)
{
    int a[5] = {11, 22, 33, 44, 55};
    int *p = &a[0];
    // Or "int *p = a;" works just as well
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i));
    }
}