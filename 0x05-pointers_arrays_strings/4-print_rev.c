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
		char temp;

		for (i = 0; i < len / 2; i++)
		{
			temp = s[i];
			s[i] = s[len - i - 1];
			s[len - i - 1] = temp;
		}
	}
}
