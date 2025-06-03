#include <stdio.h>

// 0x7ffddf7072a4
int main(void) 
{
    int i;
    int *p;
    p = &i; // points to the i, holds an address of i
    i = 10;

    printf("I is now %d\n", i);

    printf("===============\n");
    *p = 20;

    printf("===============\n");

    printf("The variable in 'i' is now %d\n", i);


    printf("The size of int is %zu and its address is %p", sizeof(i), &i);
    return 0;
};