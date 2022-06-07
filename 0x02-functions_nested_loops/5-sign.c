#include <stdio.h>

/**
 * print_sign - uses islower function from ctype header
 *  - input
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		putchar(n);
		return (43);
	}
	else if (n < 0)
	{
		putchar(45);
		putchar(n);
		return (45);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
