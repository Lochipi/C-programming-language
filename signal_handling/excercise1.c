// Let’s do an example where we make it so you have to hit CTRL-C twice to exit.
// I want to be clear that this program engages in undefined behavior in a couple ways. But it’ll probably work
// for you, and it’s hard to come up with portable non-trivial demos.

#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

int count = 0;

void sigint_handler(int signum){
    // The compiler is allowed to run:
    //
    // signal(signum, SIG_DFL)
    //
    // when the handler is called. So we reset the handler here:
    signal(SIG_IGN, sigint_handler);

    (void)signum; // Get rid of unused variable warning

    count++;  // undefined behavior
    printf("Count: %d\n", count);

    if (count == 2) {
        printf("Exiting\n"); // undefined behavior
        exit(0);
    }
}

int main(void){
    // Set up the signal handler
    signal(SIGINT, sigint_handler);

    printf("Try hitting ^C... \n");
    for(;;); // wait here forever
}