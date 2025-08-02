#include <stdio.h>
#include <stdlib.h>

#define ASSERT_ENABLED 1

#if ASSERT_ENABLED
#define ASSERT(condition, message) \
    do { \
        if (!(condition)) { \
            fprintf(stderr, __FILE__ ":%d: assertion %s failed: %s\n",  \
            __LINE__, #condition, message); \
            exit(1); \
        } \
    } while (0)
#else
#define ASSERT(condition, message) 
#endif

int main(void){
   int x = 20;

   ASSERT(x < 15, "x should be less than 15");
}
