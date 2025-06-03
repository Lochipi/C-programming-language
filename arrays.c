#include <stdio.h>

// int main(void)
// {
//   float f[3];

//   f[0] = 3.1232;
//   f[1] = 2.4092;
//   f[2] = 9.0982;


//   int i = 0;

//   for (i; i < 3; i++) {
//     printf("%f\n", f[i]);
//   }

//   printf("%zu\n", sizeof f);
//   printf("%zu", sizeof(int));

//   printf("%zu\n", sizeof f / sizeof(float));
//   printf("The size of characters is: %zu", sizeof(char));
// }

int main(void) {
    int a[3] = {1,3,4};

    int i;

    for (i = 0; i< 10; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}