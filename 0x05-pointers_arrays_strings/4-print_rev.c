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
	if (*s <= 0)
	{
		puts("\n");
	}
	else
	{
		int i;
		int len = strlen(s);

		for (i = 0; i < len; i++)
		{
			printf("%s", s[len - i - 1]);
		}
	}
}
