#include <stdio.h>
#include <stdlib.h>

#define EXTRA_HAPPY

int main(void)
{
#ifdef EXTRA_HAPPY
    printf("You are extra happy today!\n");
#else
    printf("You are not extra happy today!\n");
#endif

    printf("OK!\n");
}