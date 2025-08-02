#include <stdio.h>

void *my_memcopy(void *dest, const void *src, size_t n)
{
    // Make local variables for src and dest, but of type unsigned char

    const unsigned char *s = src;
    unsigned char *d = dest;

    while (n-- > 0) // For the given number of bytes
    {
        *d++ = *s++; // copy source byte to destination byte
    }

    // Most copy functions return a pointer to the destination as a convenience to the caller
    return dest;
}

struct foo
{
    char a;
    int b;
}

main(void)
{
    struct foo x = {0x12, 0x12345678};      // Type: struct foo
    unsigned char *p = (unsigned char *)&x; // Type: pointer to unsigned char

    for (size_t i = 0; i < sizeof x; i++)
    {
        printf("%02x ", p[i]); // Print each byte in hexadecimal format
    }
}