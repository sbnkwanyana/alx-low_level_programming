#include <stdio.h>
#include "main.h"

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
		_putchar('+');
	}
	else if (n < 0)
	{
		x = 0;
		_putchar('-');
	}
	else
	{
		x = -1;
		_putchar('0');
	}
	return (x);
}
