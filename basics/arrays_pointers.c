#include <stdio.h>

int main(void) {

    int a[5] = {1, 2, 3, 4, 5};

    // int *p = a; // Pointer to the first element of the array
    int *p;

    p = &a[0]; // p points to the first element of the array a
    
    printf("Address of a: %p\n", (void*)a); 
    printf("%d\n", *p); // Dereferencing p gives the first element of the array
    printf("%d\n", *(p + 1)); // Dereferencing p + 1
}