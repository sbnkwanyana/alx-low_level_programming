#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print all natual numbers to 98
 * @param n - start at value n
 */

void print_to_98(int n)
{
	for (n ; n < 99; n++)
	{
		if(n < -9 || n > 9)
		{
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		else
		{
			_putchar('0' + n);
		}
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
