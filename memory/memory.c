#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(sizeof(int)); // Allocate memory for an integer

    // same as:
    int *a = malloc(sizeof *a); // Allocate memory for an integer using pointer type

    *p = 12; // Assign a value to the allocated memory
    printf("Value: %d\n", *p); // Print the value stored in the allocated memory

    free(p); // Free the allocated memory to avoid memory leaks
    p = NULL; // Set pointer to NULL after freeing to avoid dangling pointer
}