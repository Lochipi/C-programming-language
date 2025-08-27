// Let’s write a program that you can’t CTRL-C out of. (Don’t fret—in the following program, you can also hit
// RETURN and it’ll exit.)

#include <stdio.h>
#include <signal.h>

int main(void){
    char s[1024];

    signal(SIGINT, SIG_IGN); // Ignore SIGINT, cased by ^C

    printf("Try hitting ^C... (hit RETURN to exit)\n");

    fgets(s, sizeof s, stdin);
}