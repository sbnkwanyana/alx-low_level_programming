#include "main.h"
#include <string.h>

/**
 * leet - function encodes a string into 1337
 * @str: string to encode
 * Return: char pointer
 */

char *leet(char *str)
{
	unsigned long i;

	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			str[i] = 4;
		}
		if (str[i] == 'e' || str[i] == 'E')
		{
			str[i] = 3;
		}
		if (str[i] == 'o' || str[i] == 'O')
		{
			str[i] = 0;
		}
		if (str[i] == 't' || str[i] == 'T')
		{
			str[i] = 7;
		}
		if (str[i] == 'l' || str[i] == 'L')
		{
			str[i] = 1;
		}
	}
	return (str);
}
