// The assert() statement is used to insist that something be true, or else the program will exit.
// Devs often use an assert to catch Should-Never-Happen type errors.
#include <assert.h>

#define PI 3.142

assert(PI > 3); // sure enough, it is, so carry on

// versus

goats -= 100;

assert(goats >= 0); // can't have negative goats