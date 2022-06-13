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
		puts("");
	}
	else
	{
		int i;
		int len = strlen(s);
		char ch;

		for (i = 0; i < len; i++)
		{
			ch = s[len - i];
			printf("%s", ch);
		}
	}
}
