#include <stdio.h>

// int main(void)
// {

//     int goat_value = 1;

//     switch (goat_value)
//     {
//     case 0:
//         printf("The goat is a baby.\n");
//         break;

//     case 1:
//         printf("The goat is an adult.\n");
//         break;

//     default:
//         printf("You have a bona fide plethora of goats!\n");
//         break;
//     }

//     return 0;
// }

int main(void)
{
    int goat_value = 0;

    switch (goat_value)
    {
    case 0:
        printf("The goat is a baby.\n");
        // break; // This line is commented out to demonstrate the effect of not breaking
        // The program will continue to execute the next case statement.
        // a fall-through behavior.
    case 1:
        printf("The goat is an adult.\n");
        break;

    default:
        printf("You have a bona fide plethora of goats!\n");
        break;
    }

    return 0;
}