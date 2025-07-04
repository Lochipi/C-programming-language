#include <stdio.h>
#include <stdlib.h>

int main2(void); // Forward declaration of main2 function

int main(void)
{
    char s[10];
    float f = 3.14159;

    char *pi = "3.14159";
    float fl;

    char *sl = "3490";

    fl = atof(pi); // Convert string to float

    // Convert the 'f' to string, storing in 's', writing at most 10 characters
    // including the null terminator.

    snprintf(s, 10, "%f", f);

    // Convert string s, a number in base 10, to an unsigned long int.
    // NULL means we don't care to learn about any error information.

    unsigned long int x = strtoul(sl, NULL, 10); // we specified that this was a decimal (base 10) number.

    printf("String value: %s\n", s);             // String value: 3.141590
    printf("Float value: %f\n", fl);             // Float value: 3.141590
    printf("Unsigned long int value: %lu\n", x); // Unsigned long int value: 3490

    // main 2

    main2();
}

//  They’re the same(as sprintf) except snprintf() allows you to specify a maximum number of bytes to output, preventing the overrunning of
//  the end of your string. So it’s safer.

int main2(void)
{
    char *s = "34x90"; // 'x' is not a valid digit in base 10
    char *badchar;

    // convert string s, a number in base 1-0, to an unsigned long int.

    unsigned long int x = strtoul(s, &badchar, 10); // we specified that this was a decimal (base 10) number.

    // It tries to convert as much as possible, so gets this far:

    printf("String value: %s\n", s); // 34

    // But we can see the offending bad character because badchar
    // points to it!

    printf("Invalid character: %c\n", *badchar); // 'x'

    // check if things went well

    if (*badchar == '\0')
    {
        printf("Success! %lu\n", x);
    }
    else
    {
        printf("Partial conversion: %lu\n", x);
        printf("Invalid character: %c\n", *badchar);
    }
}