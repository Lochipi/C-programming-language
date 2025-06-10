#include <stdio.h>

int plus_one(int x)
{
    return x + 1;
}

void hello_world(void)
{
    printf("Hello, World!\n");
}

void main_two(void)
{
    hello_world();
}

int main(void)
{
    int result = plus_one(5);
    printf("Result: %d\n", result);
    return 0;
}

