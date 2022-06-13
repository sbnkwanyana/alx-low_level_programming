#include "main.h"

/**
 * swap_int - 
 * @a: 1st number to swap
 * @b: 2nd number to swap
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*a = tmp;
}