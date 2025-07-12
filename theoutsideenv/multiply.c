#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("usage: mlt x y \n");
        return EXIT_FAILURE; // indicate to the shel that it didn't work
    }

    printf("%d\n", atoi(argv[1]) * atoi(argv[2])); // multiply the two arguments and print the result
    return EXIT_SUCCESS;                           // indicate to the shell that it worked

    // return 0; same as EXIT_SUCCESS
}