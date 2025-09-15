time_t now; // Variable to hold the time now

now = time(NULL); // You can get it like this....

time(&now); // ...or like this. Same as the previous line.

// Amusingly, there’s only one portable way to print out what’s in a time_t, and that’s the rarely-used ctime()
// function that prints the value in local time:
 
now = time(NULL);
printf("%s", ctime(&now));

// This returns a string with a very specific form that includes a newline at the end:
Sun Feb 28 18:47:25 2021

// We’ve already seen a couple ways to print formatted date output to the screen. With time_t we can use
// ctime(), and with struct tm we can use asctime().

