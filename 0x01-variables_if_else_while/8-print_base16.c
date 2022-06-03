#include <stdio.h>
/**
 * entry point: main
 * description: print
 * return (0) success
 */

int main(void)
{
   char ch;
   for(ch='0'; ch<='9'; ch++)
   {
      putchar(ch);
   }
   for(ch='a'; ch<='f'; ch++)
   {
       putchar(ch);
   }
   return (0);
}