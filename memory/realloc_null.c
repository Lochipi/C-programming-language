#include <stdlib.h>
#include <stdio.h>

// they're the same
// char *p = malloc(3490);
// char *p = realloc(NULL, 3490);

// That could be convenient if you have some kind of allocation loop and you don’t want to special-case the
// first malloc().

int *p = NULL;
int length = 0;

// while (!done)
// {
    // allocate more memory

    // length += 1000;
    // p = realloc(p, length * sizeof *p);

    // do something amazing!
// }

// In that example, we didn’t need an initial malloc() since p was NULL to start.