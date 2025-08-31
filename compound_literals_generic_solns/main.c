#include <stdio.h>
// The way you create a compound literal is to put the type name in parentheses, and then put an initializer list
// after. For example, an unnamed array of ints, might look like this:

(int[]){1, 2, 3, 4};

// we could use pointers to store references to the array

int *p = (int[]){1, 2, 3, 4};
printf("%d\n", p[2]); // prints 3