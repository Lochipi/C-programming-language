#include <stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};

void main(void)
{

    // struct car saturn;
    // struct car saturn = {"Saturn L4", 1298.1921, 782};
    struct car saturn = {.name = "Jjj", .speed = 12871}; // best option, doesn't require order and so any missing fields will be set to 0 or NULL just as arrays

    saturn.name = "Volkswagen";
    saturn.price = 1289.999;
    saturn.speed = 189;

    // pass a pointer to the function, and a realistic price
    set_price(&saturn, 898.1921);

    printf("Name is             : %s\n", saturn.name);
    printf("The price is (in KSH) %f\n", saturn.price);
    printf("The speed in km/h is: %d\n", saturn.speed);
}

void set_price(struct car *c, float new_price)
{
    //c.price won't work, because c is a pointer to struct car, not a struct car itself
    // so we need to use the arrow operator (->) to access the members of the struct
    // or dereference the pointer using the * operator
    c->price = new_price; // use the pointer to set the price

    // dereferencing the pointer to access the struct member
    // (*c).price = new_price; // this is equivalent to the above line, but less readable
}

// So when accessing fields, when do we use dot and when do we use arrow?
// • If you have a struct, use dot (.).
// • If you have a pointer to a struct, use arrow (->).

// copy

// struct car saturn2 = saturn; // this will copy the entire struct, including the pointer to the name
// saturn2.name = "Toyota"; // this will change the name of saturn2
// printf("Name is             : %s\n", saturn2.name); // this will print "Toyota"
// printf("Name is             : %s\n", saturn.name); // this will print "Toyota" too, because saturn2.name is a pointer to the same string as saturn.name