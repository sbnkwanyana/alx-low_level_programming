#include "main.h"
#include <stdio.h>

/**
 * print_array -prints n elements of an array of integers
 * @a: array
 * @n: elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		putchar(a[i]);
		if (i != n - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
