#include <stdio.h>
int x[] = {12, 34, 56, 78, 90};

const int *p = x; // Pointer to constant integer

// p++; // We can modify, no problem
// *p = 100; // Error: cannot modify the value pointed to by p

// Great, so we can’t change the thing the pointer points to, but we can change the pointer itself. What if we
// want the other way around? We want to be able to change what the pointer points to, but not the pointer
// itself?
// Just move the const after the asterisk in the declaration:

int y = 10;
int *const q = &y;

*p = 100; // We can modify the value pointed to by p
// q++; // Error: cannot modify the pointer itself

// or you can also do both things constant;

const int *const r = &y; // Pointer to constant integer, pointer itself is also constant

int main(void)
{
    const int s = 20;

    int *w = &s;

    *w = 30; // undefined behavior, since 's' is const - maybe it modifies x maybe not!

    printf("%d\n", s); // This will print 30, but it's undefined behavior since 's' is const
}

// restrict

void swap(int *restrict a, int *restrict b)
{
    int t;

    t = *a; // 'a' and 'b' are restrict pointers, so they point to different memory locations
    *a = *b;
    *b = t;
}

int main_swap(void)
{
    int x = 10, y = 20;

    swap(&x, &y); // OK! "a" and "b", above, point to different things

    swap(&x, &x); // Undefined behavior! "a" and "b" point to the same thing

    return 0;
}

// One last note: if you’re using array notation in your function parameter for some reason instead of pointer
// notation, you can use restrict like so:

void foo(int p[restrict])// With no size
void foo1(int p[restrict 10])// Or with a size

// Volatile

volatile int v = 10; // This tells the compiler that the value of 'v' can change at any time.