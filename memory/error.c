#include <stdio.h>
#include <stdlib.h>

int main() {
    int *x;

    x = malloc(sizeof(int)); // Allocate memory for an integer

    if(x == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit with an error codes
    }

    if ((x = malloc(sizeof *x)) == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Exit with an error codes
    }

    printf("Memory allocated successfully\n");
    printf("Address of allocated memory: %p\n", (void*)x);
}