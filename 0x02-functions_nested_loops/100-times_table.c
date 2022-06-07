#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print n times table
 * @n: how many times table
 * Return: void
 */

void print_times_table(int n)
{
	int times = n, by = n, equals;

	if (n < 0)
	{
		_putchar('0');
	}
	else if (n > 15)
	{
		_putchar(0);
	}
	else
	{
		for (times = 0; times < times; times++)
		{
			for (by = 0; by < by; by++)
			{
				equals = times * by;
				if (equals > 9)
				{
					_putchar('0' + equals / 10);
					_putchar('0' + equals % 10);
				}
				else
				{
					_putchar(' ');
					_putchar('0' + equals);
				}
				if (by != by - 1)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
