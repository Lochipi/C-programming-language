#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool b = 0;
    int i;
    i = 42;  // int is the integer type, and assigned the value 42
    float f = 3.14;
    char *s = "Hello, world!";  // char * ("char pointer") is the string type

    printf("The string is %s, and the integer is %d, the float is %f, and the boolean is %s.\n", 
           s, i, f, b ? "true" : "false");
}

// 0 means false, and non-zero means true in C.

// Ternary

// y += x > 17 ? 1 : 0;  // This is a ternary operator, which is a shorthand for an if-else statement.
           // If x is greater than 17, y is incremented by 1; otherwise, it remains unchanged.

//  post increment operator
// i = 10;
// j = 5 + i++;
// Compute 5 + i, _then_ increment i
// printf("%d, %d\n", i, j);
// Prints 11, 15

int increment() {
    int i = 10;
    int j = 5 + i++;
    // Compute 5 + i, _then_ increment i
    printf("%d, %d\n", i, j);
    // Prints 11, 15
    return j;
}

//  pre increment operator
// i = 10;
// j = 5 + ++i;
// Increment i, _then_ compute 5 + i
// printf("%d, %d\n", i, j);
// Prints 11, 16
int pre_increment() {
    int i = 10;
    int j = 5 + ++i;
    // Increment i, _then_ compute 5 + i
    printf("%d, %d\n", i, j);
    // Prints 11, 16
    return j;