#include <stdio.h>

int main(void){

    int i = 0;

    do {
        printf("Hello %d \n", i);
        i++;
    } while (i < 5);

    printf("Hey, it is done!\n");
    return 0;
}