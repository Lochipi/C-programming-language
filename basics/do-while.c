#include <stdio.h>
#include <stdlib.h>

int main(void){

    int i = 0;
    int r;

    do {
        r = rand() % 100;
        printf("Hello %d and random %d \n", i, r);
        i++;
    } while (i < 5 && r != 37);

    printf("Hey, it is done!\n");
    return 0;
}