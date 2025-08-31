#include <stdio.h>

#define TYPESTR(x) _Generic((x), \
    int: "int",                  \
    long: "long",                \
    float: "float",              \
    double: "double",            \
    default: "something else")

int main(void)
{
    int i;
    long l;
    float f;
    double d;
    char c;
    printf("i is type %s\n", TYPESTR(i));
    printf("l is type %s\n", TYPESTR(l));
    printf("f is type %s\n", TYPESTR(f));
    printf("d is type %s\n", TYPESTR(d));
    printf("c is type %s\n", TYPESTR(c));
}
// This outputs:
// i is type int
// l is type long
// f is type float
// d is type double
// c is type something else

// Which should be no surprise, because, like we said, that code in main() is replaced with the following when it is compiled : printf("i is type %s\n", "int");

printf("l is type %s\n", "long");
printf("f is type %s\n", "float");
printf("d is type %s\n", "double");
printf("c is type %s\n", "something else");

// And that’s exactly the output we see