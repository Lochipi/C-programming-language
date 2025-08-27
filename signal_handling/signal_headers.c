#include <signal.h>
// func prototype for the signal call

void (*signal(int sig, void (*func)(int)))(int);