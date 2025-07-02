#include <stdio.h>
#include <stdlib.h>

// Read a line of arbitrary size from a file
// Returns a pointer to the line.
// Returns NULL on EOF or error.
// It's up to the caller to free() this pointer when done with it.
// Note that this strips the newline from the result. If you need
// it in there, probably best to switch this to a do-while.

char *readline(FILE *fp)
{

    int offset = 0;  // index next char goes in the buffer
    int bufsize = 4; // preferably power of 2 initial size
    char *buf;       // the buffer
    int c;           // the current character we've read in

    buf = malloc(bufsize); // allocate initial buffer

    if (buf == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL; 
    }

    // Main loop - read until we hit EOF, newline or an error
    while (c = fgetc(fp), c != '\n' && c != EOF)
    {
        // Check if we're out of room in the buffer accounting
        //  for the extra byte for the null terminator

        if (offset == bufsize - 1)   // -1 for the null terminator
        {               
            bufsize *= 2; // 2x the space

            char *new_buf = realloc(buf, bufsize);

            if (new_buf == NULL)
            {
                fprintf(stderr, "Memory reallocation failed\n");
                free(buf); // Free the original buffer
                return NULL;  
            }
            buf = new_buf; // Use the reallocated buffer
        }

        buf[offset++] = c; // Store the character in the buffer
    }

    // we hit newline or EOF...

    // If at EOF and we read no bytes, free the buffer
    // and return NULL to indicate we're at EOF:

    if (c == EOF && offset == 0)
    {
        free(buf);
        return NULL; // Indicate EOF
    }

    // shrink to fit

    if (offset < bufsize - 1) // if we're short of the end
    {                                             
        char *new_buf = realloc(buf, offset + 1); // +1 for the nul terminator

        // if successful, point buf to the new_buf
        if (new_buf != NULL)
            buf = new_buf;
    }

    // add the null terminator
    buf[offset] = '\0';

    // Return the buffer containing the line read
    return buf; // Return the buffer pointer
}

int main(void)
{
    FILE *fp = fopen("foo.txt", "r");
    if (fp == NULL)
    {
        fprintf(stderr, "Failed to open file\n");
        return -1; // Return an error code
    }

    char *line; 

    while ((line = readline(fp)) != NULL)
    {
        printf("%s\n", line);
        free(line);
    }

    fclose(fp);
}