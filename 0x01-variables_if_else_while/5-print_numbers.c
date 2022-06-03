#include <stdio.h>
/**
 * entry point: main
 * description: print numbers for loop printf function
 * return (0) success
 */
int main(void)
{
    int number;
    for (number=0; number<=9; number++)
    {
        printf("%d", number);
    }
    return (0);
}
