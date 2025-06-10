#include <stdio.h>

int main(void)
{
    int i;

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

int forloop()
{
    int i, j;
    for (i = 0, j = 999; i < 10; i++, j--)
    {
        printf("%d, %d\n", i, j);
    }
}