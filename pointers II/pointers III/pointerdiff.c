#include <stddef.h>
#include <stdio.h>

int main(void)
{
    int cats[100]; // Declare an array of 100 integers

    int *f = cats + 10;
    int *g = cats + 20;

    ptrdiff_t diff = g - f;
    printf("%td\n", diff); // Print decimal: 40
    printf("%tX\n", diff); // Print hex: 28
    return (int)diff;      // Cast to int for return value
}