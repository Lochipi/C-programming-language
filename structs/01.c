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
    struct car saturn = {.name = "Jjj", .price = 2938.232, .speed = 12871};

    saturn.name = "Volkswagen";
    saturn.price = 1289.999;
    saturn.speed = 189;

    printf("Name is             : %s\n", saturn.name);
    printf("The price is (in KSH) %f\n", saturn.price);
    printf("The speed in km/h is: %d\n", saturn.speed);
}