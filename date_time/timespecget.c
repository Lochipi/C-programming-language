// You can get the number of seconds and nanoseconds since Epoch with timespec_get().
// Maybe.

// timespec_get() takes two arguments. One is a pointer to a struct timespec to hold the time information.
// And the other is the base, which the spec lets you set to TIME_UTC indicating that you’re interested in seconds
// since Epoch. (Other implementations might give you more options for the base.)

// And the structure itself has two fields

struct timespec
{
    time_t tv_sec; // seconds
    long tv_nsec;  // Nanoseconds (billionths of a second)
};

// Here’s an example where we get the time and print it out both as integer values and also a floating value:

struct timespec ts;
timespec_get(&ts, TIME_UTC);
printf("%ld s, %ld ns\n", ts.tv_sec, ts.tv_nsec);
double float_time = ts.tv_sec + ts.tv_nsec / 1000000000.0;
printf("%f seconds since epoch\n", float_time);

// Example output:
// 1614581530 s, 806325800 ns
// 1614581530.806326 seconds since epoc