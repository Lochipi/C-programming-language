#include <stdio.h>

#define SQR(x) x * x

int main(void)
{
    printf("The square of 5 is: %d\n", SQR(5)); 
}
// What that’s saying is “everywhere you see SQR with some value, replace it with that value times itself”.
// printf("%d\n", 12 * 12); 144

// if we do SQR(3 + 4), it will expand to 3 + 4 * 3 + 4
// printf("%d\n", 3 + 4 * 3 + 4); // 19!

// #define SQR(x) (x) * (x)
// Better... but still not quite good enough!

// best way
// define SQR(x) ((x) * (x))