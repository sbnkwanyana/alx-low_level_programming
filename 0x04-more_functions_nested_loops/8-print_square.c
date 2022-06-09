#include <stdio.h>
#include "main.h"

/**
 * print_square - print square on terminal
 * @n: sides
 * Return: void
 */

void print_square(int n)
{
	int i, x;

	while (i < n)
	{
		while (x < n)
		{
			_putchar('#');
			x++;
		}
		i++;
		_putchar('\n');
	}
}
