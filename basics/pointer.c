#include <stdio.h>

int dereference(void); // function prototype

int main(void) 
{
    int i;
    int *p;
    p = &i; // points to the i, holds an address of i
    i = 10;

    printf("i is now %d\n", i);

    printf("===============\n");
    *p = 20; // dereferencing, using * to access the value at the address stored in p

    printf("===============\n");

    printf("The variable in 'i' is now %d\n", i);


    printf("The size of int is %zu and its address is %p", sizeof(i), &i);
    return 0;
};

// dereferencing: accessing the value at the address stored in a pointer

int dereference(void) {
    int i;
    int *p;

    p = &i; // points to the i, holds an address of i

    i = 10; 
    printf("i is now %d\n", i);

    printf("===============\n");
    *p = 20; // the thing p points to is now 20

    printf("===============\n");
    printf("The variable in 'i' is now %d\n", i);
    printf("The size of int is %zu and its address is %p\n", sizeof(i), &i);
    return 0;
}

// passing pointers as arguments

void increment_pointer(int *p) { // accepts a pointer to an int

    // add one to the thing p points to
    *p = *p + 1; // dereferencing the pointer to change the value at the address it points to
}

int pointer_as_argument(void) {
    int i = 10;

    int *j = &i; // j points to i

    printf("i is now %d\n", i);
    printf("i is also %d\n", *j); // dereferencing j to get the value of i

    increment_pointer(j); // passing the pointer j to the function

    printf("i is now %d\n", i); // i is now 11, because increment_pointer changed the value at the address j points to
}

// by analogy, like two pieces of paper with the same home address written on them.) Dereferencing
// either will allow you to modify the original variable i!

// concise way

// printf("i is %d\n", i);
// increment_pointer(&i); // passing the address of i directly
// printf("i is now %d\n", i); // i is now 12, because increment_pointer changed the value at the address of i

int *p;

p = NULL; // initializing pointer to NULL