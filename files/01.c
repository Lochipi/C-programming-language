#include <stdio.h>
int write_file(void);

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
    write_file();
}

//Streams are largely categorized two different ways: text and binary.

// writing text files , fputc(), fputs(), fprintf()
// reading text files , fgetc(), fgets(), fscanf()

int write_file (){
    FILE *fp;
    int x = 32;

    // fp = fopen("output.txt", "w");
    fp = stdout; // since stdout is a file pointer to the standard output (console) - the program would be printing to the console instead of a file

    fputc('B', fp);
    fputc('\n', fp); // new line
    fprintf(fp, "The value of x is %d\n", x);
    fputs("Hello World\n", fp);
    fclose(fp);
};