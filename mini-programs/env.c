// a program that uses the standard getenv() function to look up a value that you set in the shell.
// getenv() will return a pointer to the value string, or else NULL if the environment variable doesn’t exist.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *val = getenv("FROTZ"); // try to get the value of the environment variable FROTZ

    // check to make sure it exists
    if (val == NULL)
    {
        printf("Cannot find the FROTX environment variable.\n");
        return EXIT_FAILURE; // indicate to the shell that it didn't work
    }

    printf("The value of FROTZ is: %s\n", val); // print the value of the environment variable
    return EXIT_SUCCESS;                        // indicate to the shell that it worked
}