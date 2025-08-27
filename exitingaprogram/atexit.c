#include <stdlib.h>
#include <stdio.h>

void on_exit_1(void){
    printf("Exit handler 1 is called! \n");
}

void on_exit_2(void){
    printf("Exit handler 2 is called! \n");
}

int main(void){
    atexit(on_exit_1);
    atexit(on_exit_2);

    printf("About to exit...\n");
}

// the output
// About to exit...
// Exit handler 2 is called!
// Exit handler 1 is called!