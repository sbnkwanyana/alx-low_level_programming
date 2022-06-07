#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - the last digit of a number
 *  - input
 * Return: int
 */

int print_last_digit(int n)
{
	int x;
	if (n < 0)
	{
		x = (n % 10) * -1;
		_putchar(x);
	}
	else
	{
		x = (n % 10);
		_putchar(x);
	}
	return x;
}
