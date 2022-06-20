#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination
 * @src: source
 * @n:bytes to copy
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
