#include <stdio.h>

// float (*p) (int, int);

void print_int(int n) {
    printf("%d\n", n);
}

int main(void) {
    // assign p to point to print_int
    void (*p)(int) = print_int;

    p(3490); // call the function(print_int) through the pointer
}