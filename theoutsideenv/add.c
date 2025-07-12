#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int total = 0;

    // Cute trick to get the compiler to stop warning about the
    // unused variable argc:
    (void)argc; // This line tells the compiler that argc is intentionally unused.

    for (char **p = argv + 1; *p != NULL; p++) // start at 1, the first argument
    {
        int value = atoi(*p); // Use strtol() for better error handling. convert argument to integer
        total += value;       // add the value to total
    }
    printf("Total: %d\n", total); // print the total
}

// atoi is a simple function that converts a string to an integer.
// It does not handle errors well, so for production code, consider using strtol() for
// better error handling. strtol() allows you to check for conversion errors and handle them appropriately.
// For example, you can check if the input is a valid integer and handle cases where it is not.
// The atoi function is part of the C standard library, so you need to include <stdlib.h> to use it.
// The printf function is used to print the total to the console, and it is part of the C standard library as well, so you need to include <stdio.h>
