// sizeof, type -- size_t special type to rep the return value of sizeof operator

int main()
{
    int a = 10;

    //%zu is the format specifier for size_t type

    printf("%zu\n", sizeof a);  // Prints 4 on my system
   
    printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system
    printf("%zu\n", sizeof 3.14);  // Prints 8 on my system
   

    // If you need to print out negative size_t values, use %zd

    printf("%zu\n", sizeof(int));  // Prints 4 on my system
    printf("%zu\n", sizeof(char)); // Prints 1 on all systems
   
    return 0;
}
// It’s important to note that sizeof is a compile-time operation