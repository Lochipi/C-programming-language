#include <stdio.h>

typedef struct
{
    int a;
    int b;
} Result;

Result calculate(int a, int b)
{
    return (Result){a + b, a - b};
}

int main(void)
{
    Result r = calculate(5, 3);
    printf("Sum: %d, Difference: %d\n", r.a, r.b);
    return 0;
}