#include <stdio.h>

void read_lines(void) {
    FILE *fp;
    char s[1024];

    int linecount = 0;

    fp = fopen("quote.txt", "r");

    while(fgets(s, sizeof s, fp) != NULL) {
        printf("%d : %s", ++linecount, s);
    }
}

void main()
{
    FILE *fp;

    fp = fopen("hello.txt", "r"); // returns a file which we're storing in fp

    // int c = fgetc(fp);
    int c;

    while((c = fgetc(fp)) != EOF){
        printf("%c", c);
    }
    printf("\n");
    fclose(fp);

    // printf("%c\n", c);

    read_lines();
}