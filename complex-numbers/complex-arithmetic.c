#include <stdio.h>
#include <complex.h>

int main(void){
    double complex x = 1 + 2*I;
    double complex y = 3 + 4*I;
    double complex z;

    z = x + y;
    printf("x + y = %f + %fi\n", creal(z), cimag(z));

    z = x - y;
    printf("x - y = %f + %fi\n", creal(z), cimag(z));

    z = x * y;
    printf("x * y = %f + %fi\n", creal(z), cimag(z));

    z = x / y;
    printf("x / y = %f + %fi\n", creal(z), cimag(z));
}

// for a result of:
// x + y = 4.000000 + 6.000000i
// x - y = -2.000000 + -2.000000i
// x * y = -5.000000 + 10.000000i
// x / y = 0.440000 + 0.080000i