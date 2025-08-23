#include <stdio.h> 
#include <stdarg.h>

void func(int a, ...) {
   printf("a is %d\n", a); // print "a is 2"
}

int main(void) {
    func(2, 3, 4, 5); // we can get the first arg, but not the rest
}

