#include <stdio.h>
int read_binary(void); 

int main(void)
{
    FILE *fp;

    unsigned char bytes[6] = {5, 37, 0, 88, 255, 12};

    fp = fopen("output.bin", "wb"); // Open file for writing in binary mode

    // In the call to fwrite, the arguments are:
    //
    // * Pointer to data to write
    // * Size of each "piece" of data
    // * Count of each "piece" of data
    // * FILE*
    fwrite(bytes, sizeof(char), 6, fp);
    fclose(fp);

    // Now read the binary file
    read_binary();
}

int read_binary(void)
{
    FILE *fp;
    unsigned char c;

    fp = fopen("output.bin", "rb"); // rb for "read binary"!

    while (fread(&c, sizeof(char), 1, fp) > 0)
        printf("%d\n", c);

    fclose(fp);
}