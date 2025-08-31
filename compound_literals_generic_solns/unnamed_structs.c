#include <stdio.h>

struct coord
{
    int x, y;
};

void print_coord(struct coord c)
{
    printf("%d, %d\n", c.x, c.y);
}

int main(void)
{
    struct coord t = {.x = 10, .y = 20};

    print_coord(t);
}

// Straightforward enough?
// Let’s modify it to use an unnamed object instead of the variable t we’re passing to print_coord().
// We’ll just take t out of there and replace it with an unnamed struct:

//struct coord t = {.x=10, .y=20};

print_coord((struct coord){.x=10, .y=20}); // prints "10, 20"

// Still works!