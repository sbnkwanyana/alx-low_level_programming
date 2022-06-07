#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - the last digit of a number
 *  - input
 * Return: int
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = (n % 10) * -1;
		_putchar(n);
	}
	else
	{
		n = (n % 10);
		_putchar(n);
	}
	return n;
}
