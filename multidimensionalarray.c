#include <stdio.h>

int main(void)
{

    int row, col;

    // int a[1];   one dimension
    // int b[2][4]; two dimension
    // int c[4][5][9]; three dimension

    int a[2][5] = {
        {2, 4, 6, 8, 9},
        {34, 6, 67, 8, 6}};

    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("(%d,%d) = %d\n", row, col, a[row][col]);
        }
    };

    return 0;
}

int twodarr(void)
{
    // int r, c;
    int b[3][3] = {[0][1] = 3, [1][1] = 1, [2][2] = 1};

    // printf("his second one is: %d\n", b[3][3]);
}