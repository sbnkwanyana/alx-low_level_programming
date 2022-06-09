#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle on terminal
 * @n: sides
 * Return: void
 */

void print_triangle(int n)
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
