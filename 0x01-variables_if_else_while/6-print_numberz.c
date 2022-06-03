#include <stdio.h>
/**
 * entry point: main
 * description: print numbers putchar function with newline
 * return (0) success
 */
int main(void)
{
    int number;
    for (number=0; number<=9; number++)
    {
        putchar(number);
    }
    putchar('\n');
   return (0);
}