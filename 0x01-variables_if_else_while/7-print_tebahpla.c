#include <stdio.h>
/**
 * entry point: main
 * description: print
 * return (0) success
 */

int main(void)
{
   char ch;
   for(ch='z'; ch<='a'; ch--)
   {
      putchar(ch);
   }
   return (0);
}