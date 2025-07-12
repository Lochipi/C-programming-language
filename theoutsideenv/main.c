#include <stdio.h>

int main(int argc, char *argv[restrict])
{
    for (int i = 0; i < argc; i++)
    {
        if (argv[i] != NULL)
        {
            printf("Argument %d: %s\n", i, argv[i]);
        }
        else
        {
            printf("Argument %d: NULL\n", i);
        }
    }
    return 0;
}