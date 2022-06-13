#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - return length of a string
 * @s: string value
 * Return: int length
 */

void print_rev(char *s)
{
	if (s <= 0)
	{
		putchar("\n");
	}
	else
	{
		int i;

		for (i = strlen(s); i >= 0; i--)
		{
			putchar(s[i]);
		}
	}
}
