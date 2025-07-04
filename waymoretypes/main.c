// char is actually a number. Remember to keep things in the range of 0 to 255.

#include <stdio.h>

int main(void)
{
    char a = 10, b = 20;

    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);
}

// more int types: short, long, long long
// more float types: float, double, long doubles
// more char types: signed char, unsigned char

/* Type your code here, or load an example. */
#include <stdio.h>

int main_1(void) {
   float f = 3.14159f;
   float g = 0.00000265358f;

   printf("%.5f\n", f); //3.14159 -- correct
   printf("%.11f\n", g); // 0.00000265358 -- correct

   //now add them up
   f += g; // 3.14159265358 is what f _should_ be

   printf("%.11f\n", f); // 3.14159274101 - wrong!
}
// Remember that FLT_DIG is the safe number of digits you can store in a float and retrieve correctly.


// Convert
// you can only encode FLT_DIG for a float, not a double