#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverse string
 * @s: string value
 * Return: void
 */

void rev_string(char *s)
{
	int i, temp;

	for (i = 0; i < (strlen(s) / 2); i++)
	{
		temp = s[i];
		s[i] = s[strlen(s) - i - 1];
		s[strlen(s) - i - 1] = temp;
	}
	printf("%s", s);
}
