// strftime() is a function that formats date and time information in a locale-specific way. 

// Let’s see some examples. In each of these, we pass in a destination buffer, a maximum number of characters
// to write, and then a format string (in the style of—but not the same as—printf()) which tells strftime()
// which components of a struct tm to print and how

#include <stdio.h>
#include <time.h>

int main(void){
    char s[128];

    time_t now = time(NULL);

    // %c: print date as per current locale
    strftime(s, sizeof s, "%A, %B %d", localtime(&now));
    puts(s); // Sunday, February 28

    // %I: hour (12 hour clock)
    // %M: minute
    // %S: second
    // %p: AM or PM

    strftime(s, sizeof s, "It's %I:%M:%S %p", localtime(&now));
    puts(s), // It's 10:29:00 PM

    // %F: ISO 8601 yyyy-mm-dd
    // %T: ISO 8601 hh:mm:ss
    // %z: ISO 8601 time zone offset

    strftime(s, sizeof s, "ISO 8601: %FT%T%z", localtime(&now));
    puts(s); // ISO 8601: 2021-02-28T22:29:00-0800
}