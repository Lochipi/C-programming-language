// make an alias for a type

typedef int antelope; // Make "antelope" an alias for "int"
antelope a = 5; // Now you can use "antelope" as if it were "int"

// typedef int antelope, bagel, love; These are all "int"

//typdef and structs

struct animal
{
    char *name;
    int leg_count;
};

typedef struct animal animal_t; 

// Now you can use "animal_t" as an alias for "struct animal"
animal_t my_animal; // Declare a variable of type "animal_t"
animal_t z; // You can also declare multiple variables of the same type
animal_t my_animal;

// common ways nowadays 

typedef struct cow {
    char *name;
    int leg_count, speed;
} animal_t;

struct animal_t y; 
animal_t z;


typedef struct
{
    char *name;
    int leg_count, speed;
} point;

point p = {.leg_count=9, .name="antelope", .speed=10}; // Initialize a point variable


// typedef with pointers
typedef int *int_ptr; // Make "int_ptr" an alias for "int*"
int_ptr p1, p2; // Now you can declare pointers using "int_ptr"

int a = 10;
p1 = &a; // p1 points to the address of a
*p1 = 20; // Change the value at the address pointed to by p1