#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(10 * sizeof(int)); // Allocate memory for an array of 10 integers

    for (int i =0; i < 10; i++){
        a[i] = i * 2; // Assign values to the array elements
    }

    for (int i = 0; i < 10; i++) {
        printf("a[%d] = %d\n", i, a[i]); // Print the values of the array elements
    }

    free(a); // Free the allocated memory to avoid memory leaks
    a = NULL; // Set pointer to NULL after freeing to avoid dangling pointer
    return 0; // Return success code
}


// Alternate version using calloc

// Allocate space for 10 ints with calloc(), initialized to 0:
// int *p = calloc(10, sizeof(int));
// Allocate space for 10 ints with malloc(), initialized to 0:
// int *q = malloc(10 * sizeof(int));
// memset(q, 0, 10 * sizeof(int));
// set to 0