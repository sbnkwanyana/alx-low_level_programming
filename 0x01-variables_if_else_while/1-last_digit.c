#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * @
 * 
 *  int 
 */
int main(void)
{
	int n;
	int lastDigit;
	char text[] = "Last digit of ";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if(lastDigit > 5)
	{
		printf("%s %d is %d and is greater than 5", text, n, lastDigit);
	}
	else if(lastDigit <= 6)
	{
		printf("%s %d is %d and is less than 6 and not 0", text, n, lastDigit);
	}

	return (0);
}
