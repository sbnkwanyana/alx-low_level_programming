#include "main.h"
#include <string.h>

/**
 * _strncat - 
 * @dest: destination string
 * @src:source string
 * @n: number of bytes/characters to take
 * Return: 
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char new[98];

	for (i = 0; i < n; i++)
	{
		new[i] = src[i];
	}
	return (strcat(dest, new));
}
