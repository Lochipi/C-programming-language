#include <stdio.h>

int main(void)
{
    printf("This function: %s\n", __func__);
    printf("This file: %s\n", __FILE__);
    printf("This line: %d\n", __LINE__);
    printf("Compiled on: %s %s\n", __DATE__, __TIME__);
    printf("C Version: %ld\n", __STDC_VERSION__);
}

// __FILE__, __func__ and __LINE__ are particularly useful to report error conditions in messages to devel-
// opers. The assert() macro in <assert.h> uses these to call out where in the code the assertion failed.