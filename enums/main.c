#include <stdio.h>

enum
{
    ONE = 1,
    TWO = 2, // trailing comma is allowed in C17
};

// Named enum, type is 'enum resource'
enum resource
{
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
};

// declare a variable 'r' of type 'enum resource'

enum resource r = BRICK;

if (r == BRICK)
{
    printf("I'll trade you a brick for a sheep!\n");
}

int main(void)
{
    printf("ONE: %d %d\n", ONE, TWO);
    return 0;
}

// you can still typedef theseL

typedef enum
{
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
} resource_t;

resource_t r2 = BRICK;

// Another shortcut that’s legal but rare is to declare variables when you declare the enum :
// Declare an enum and some initialized variables of that type:
enum
{
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
} r = BRICK, s = WOOD;

// You can also give the enum a name so you can use it later, which is probably what you want to do in most cases :
// Declare an enum and some initialized variables of that type:
enum resource
{
    SHEEP,
    WHEAT,
    WOOD,
    BRICK,
    ORE
} r = BRICK,
  s = WOOD;
// In short, enums are a great way to write nice, scoped, typed, clean code.