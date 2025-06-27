#include <stdio.h>
int my_strlen(char *s);

int main(void)
{
    int a[6] = {11, 12, 3, 45, 6, 7};

    int *p = &a[0];

    while (*p != 7)
    {
        printf("%d\n", *p);
        p++; // Move the pointer to the next element
    }

    printf("The length of the string is: %d\n", my_strlen("Hello, world!"));
}

// substracting pointers

int my_strlen(char *s)
{
    // Start scanning from the beginning of the string
    char *p = s;

    while(*p != '\0') 
        p++; // Move the pointer to the next character

    // Return the length of the string
    return p - s; // The difference between the end pointer and the start pointer gives the
                  // length of the string
}