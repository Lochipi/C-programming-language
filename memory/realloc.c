#include <stdio.h>
#include <stdlib.h>

// Be sure when you call realloc(), you specify the number of bytes to allocate, and not just the number of
// array elements! That is:
// int main()
// {
//     num_floats *= 2; // Double the number of floats

//     np = realloc(p, num_floats); // wrong: needs bytes, not number of elements

//     np = realloc(p, num_floats * sizeof(float)); // Correct: reallocating memory for the new size in bytes
// }

// assign the result of realloc() to a new pointer variable to avoid memory leaks, if realloc() fails, the original pointer remains unchanged - in case it returns NULL we can still use the original pointer

// Note: realloc() can return NULL if it fails to allocate memory, so it's a good practice to check the return value.

int main()
{

    // Allocate memory for 20 floats
    float *p = malloc(20 * sizeof(float));

    // assign them fractional values 0.0-1.0:
    for (int i = 0; i < 20; i++)
        p[i] = i / 20.0;
  
    // But wait! Let's actually make this an array of 40 elements
    float *new_p = realloc(p, 40 * sizeof(float));

    if (new_p == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1; // Exit with an error code
    }

    // If we did, we can just reassign p
    p = new_p;

    // and assign the new elements values in the range of 1.0-2.0:
    for (int i = 20; i < 40; i++)
        p[i] = (i - 20) / 20.0 + 1.0;

    // print all the values 0.0-2.0 in the 40 elements
    for (int i = 0; i < 40; i++)
        printf("p[%d] = %.2f\n", i, p[i]);

    // Free the allocated memory
    free(p);
}