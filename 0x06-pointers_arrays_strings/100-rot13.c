#include "main.h"
#include <string.h>

/**
 * rot13 - function encodes a string using rot13
 * @str: string to encode
 * Return: char pointer
 */

char *rot13(char *str)
{
	int i;
	char upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char lower[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
		{
			str[i] = (str[i] - 65 > 25) ?
				lower[str[i] - 97] : upper[str[i] - 65];
		}
	}
	return (str);
}
