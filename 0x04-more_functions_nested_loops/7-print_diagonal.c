#include <stdio.h>
#include "main.h"

/**
 * print_line - print diagonal line on terminal
 * @n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n ; n++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
