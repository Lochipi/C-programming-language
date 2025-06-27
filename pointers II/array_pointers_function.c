// This is where you’ll encounter this concept the most, for sure.
// If you have a function that takes a pointer argument, e.g.:

int str_len(char *s);

// this means you can pass either an array or a pointer to this function and have it work!

char s[] = "Hello, World!";
char *s = "wombats";

printf("%d\n", my_strlen(s)); // Works!
printf("%d\n", my_strlen(t)); // Works, too!

// And it’s also why these two function signatures are equivalent:
int my_strlen(char *s) // Works!
int my_strlen(char s[]) // Works, too!
