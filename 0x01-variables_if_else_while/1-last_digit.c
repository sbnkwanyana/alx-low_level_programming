#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point
 * descripton find last digit of a number and print message
 * Return: 0
 */
int main(void)
{
	int n = 0;
	char text[] = "Last digit of ";
	int lastDigit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (lastDigit == 0)
	{
		printf("%s %i is %i and is 0", text, n, lastDigit);
	}
	else if (lastDigit > 5)
	{
		printf("%s %i is %i and is greater than 5", text, n, lastDigit);
	}
	else if (lastDigit < 6)
	{
		printf("%s %i is %i and is less than 6 and not 0", text, n, lastDigit);
	}

	return (0);
}
