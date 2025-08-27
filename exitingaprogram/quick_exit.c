// This is similar to a normal exit, except:
// • Open files might not be flushed.
// • Temporary files might not be removed.
// • atexit() handlers won’t be called.

// But there is a way to register exit handlers: `call at_quick_exit()` analogously to how you’d call atexit()

#include <stdio.h>
#include <stdlib.h>

void on_quick_exit_1(void){
    printf("Quick exit hander 1 called! \n");
}

void on_quick_exit_2(void){
    printf("Quick exit hander 2 called! \n");
}

void on_exit(void){
    printf("Normal exit--I won't be called!\n");
}

int main(void){
    at_quick_exit(on_quick_exit_1);
    at_quick_exit(on_quick_exit_2);

    atexit(on_exit); //This won't be called.

    printf("About to quick exit...\n");

    quick_exit(0);
}

// results
// About to quick exit...
// Quick exit handler 2 called!
// Quick exit handler 1 called!


// It works just like exit()/atexit(), except for the fact that file flushing and cleanup might not be done.