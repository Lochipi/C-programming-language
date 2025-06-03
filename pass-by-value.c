#include <stdio.h>

void increment(int a) {
  a++;
}

int main() {
  int i = 10;
  increment(i);
  printf("%d\n", i);
  return 0;
}

// prints 10, not 11