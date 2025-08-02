#include <stdio.h>

int main(void)
{
    int x = 3490;  // Type: int
    int *p = &x;   // Type: pointer to an int
    int **pp = &p; // Type: pointer to a pointer to an int

    printf("%d %d\n", *p, **pp); // 3490 3490
}