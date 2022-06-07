#include <stdio.h>
#include "main.h"

/**
 * print_sign - returns 1 if positive and 0 if negative and -1 if 0
 *  - input
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
