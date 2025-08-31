#include <stdio.h>

struct coord
{
    int x, y;
};

void print_coord(struct coord *c)
{
    printf("%d, %d\n", c->x, c->y);
}

int main(void)
{
    // Note the &
    //

    print_coord(&(struct coord){.x = 10, .y = 20}); // prints "10, 20"
}

// Additionally, this can be a nice way to pass even pointers to simple objects:

// Pass a pointer to an int with value 3490
foo(&(int){3490});

// Easy as that