#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * entry point: main
 * description: 0. Positive anything is better than negative nothing
 *  @return success (0)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n > 0)
    {
        printf("%u is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%u is negative\n", n);
    }
    else
    {
        printf("%u is zero\n", n);
    }
    return (0);
}
