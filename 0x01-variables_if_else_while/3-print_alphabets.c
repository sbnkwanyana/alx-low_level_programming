#include <stdio.h>
/**
 * entry point: main
 * description: prints alphabet lowercase
 * return (0) success
 */
int main(void)
{
    char ch;
    for (ch='a'; ch<='z'; ch++)
    {
        putchar(ch);
    }
    for (ch='A'; ch<='Z'; ch++)
    {
        putchar(ch);
    }
    return (0);
}
