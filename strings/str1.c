#include <stdio.h>
#include <string.h>

void main(void)
{

   char s[] = "Hello, world!";
   char t[100];

   char *w;
   //    char *s = "Hello world!";
   //  null character in c, '\0'
   for (int i = 0; i < 13; i++)
   {
      printf("%c\n", s[i]);
   }

   w = s; // this makes a copy of the pointer not a string.

   w[0] = 'w';

   // making a copy of the string
   strcpy(t, s);

   t[0] = 'z';

   printf("A pointer copy is: %s\n", w); // A pointer copy is: wello, world!
   printf("The string is: %s\n", t);     // The string is: zello, world!
   // printf("%s\n:", s);
   printf("The lenght of a string is: %zu", strlen(s));  // The lenght of a string is: 13
}

// the built in strlen does this!
int str_len(char *s)
{
   int count = 0;

   while (s[count] != '\0')
   {
      count++;
   }

   return count;
}