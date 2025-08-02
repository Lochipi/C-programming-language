#include <stdio.h>
#include <threads.h>

// Escapes
// \b Backspace. Move the cursor back one character. Doesn't delete the character.
// \r Return. Move to the beginning of the same line.
// A use case for \b or \r is to show status updates that appear on the same line on the screen and don’t cause
//  the display to scroll. Here’s an example that does a countdown from 10.

int main(void)
{
    for (int i = 10; i > 0; i--)
    {
        printf("\rT minus %d second%s... \b", i, i != 1 ? "s" : "");
        fflush(stdout); // Force output to update

        // sleep for 1 second
        // thrd_sleep(&(struct timespec){.tv_sec = 1, .tv_nsec = 0}, NULL);
        thrd_sleep(&(struct timespec){.tv_sec=1}, NULL); // this initializes only tv_sec, leaving tv_nsec at 0 by default.
    }

    printf("\rLiftoff!    \n");
}

// Notes:
// Quite a few things are happening on line 7. First of all, we lead with a \r to get us to the beginning of the
// current line, then we overwrite whatever’s there with the current countdown. (There’s ternary operator out
// there to make sure we print 1 second instead of 1 seconds.)

// Also, there’s a space after the ... That’s so that we properly overwrite the last . when i drops from 10 to 9
// and we get a column narrower. Try it without the space to see what I mean.
// And we wrap it up with a \b to back up over that space so the cursor sits at the exact end of the line in an
// aesthetically-pleasing way.

// Note that line 22 also has a lot of spaces at the end to overwrite the characters that were already there from
// the countdown.

// Finally, we have a weird fflush(stdout) in there, whatever that means. Short answer is that most termi-
// nals are line buffered by default, meaning they don’t actually display anything until a newline character is
// encountered. Since we don’t have a newline (we just have \r), without this line, the program would just
// sit there until Liftoff! and then print everything all in one instant. fflush() overrides this behavior and
// forces output to happen right now.