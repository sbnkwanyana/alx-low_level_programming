#include <stdio.h>

/**
 * print_sign - returns 1 if positive and 0 if negative and -1 if 0
 *  - input
 * Return: int
 */

int print_sign(int n)
{
	int x;
	if (n > 0)
	{
		x = 1;
		putchar('+');
	}
	else if (n < 0)
	{
		x = 0;
		putchar('-');
	}
	else
	{
		x = -1;
		putchar('0');
	}
	return (x);
}
