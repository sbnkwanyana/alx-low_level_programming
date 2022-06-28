#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that returns pointer to allocated memory
 * with contents of the concatinated strings
 * @s1: string 1
 * @s2: string 2
 * Return: concatinated string
 */

char *str_concat(char *s1, char *s2)
{
	char *mem;
	unsigned long i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	mem = malloc((strlen(s1) + strlen(s2) + 1));

	if (mem != NULL)
	{
		for (i = 0; i <  strlen(s1); i++)
		{
			mem[i] = s1[0];
		}

		for (j = 0; i < strlen(mem); i++)
		{
			mem[i] = s2[j];
			j++;
		}

		/* mem[i] = "\0"; */
	}

	return (mem);
}
