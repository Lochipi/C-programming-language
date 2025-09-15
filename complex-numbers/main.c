// complex and imaginary 

// Let’s define a complex number that uses float for its components:

float complex c; // Spec prefers this way
complex float c2; // This is also valid, order doesnt matter

// initializing them 

double complex x = 5 + 2*I;
double complex y = 10 + 3*I;

// above^ = For 5 + 2i and 10 + 3i, respectively

// Now let’s try the reverse: if we have a complex number, how do we break it apart into its real and imaginary
// parts?
// Here we have a couple functions that will extract the real and imaginary parts from the number: creal()
// and cimag():

double complex x = 5 + 2*I;
double complex y = 10 + 3*I;
printf("x = %f + %fi\n", creal(x), cimag(x));
printf("y = %f + %fi\n", creal(y), cimag(y));

// output
// x = 5.000000 + 2.000000i
// y = 10.000000 + 3.000000i