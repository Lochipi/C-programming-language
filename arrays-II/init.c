// C is a little bit, shall we say, flexible when it comes to array initializers.
// We’ve already seen some of this, where any missing values are replaced with zero.
// For example, we can initialize a 5 element array to 1,2,0,0,0 with this:

int a[5] = {1, 2};

// Or set an array entirely to zero with:

int a[5] = {0};

// But things get interesting when initializing multidimensional arrays.
// Let’s make an array of 3 rows and 2 columns:

int a[3][2];

// Let’s write some code to initialize it and print the result:

#include <stdio.h>

int main(void)
{
    int a[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}};

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 2; col++)
            printf("%d", a[row][col]);
        printf("\n");
    }
}
// Output
// 1 2
// 3 4
// 5 6