#include "main.h"
#include <string.h>

/**
 * print_rev - return length of a string
 * @s: string value
 * Return: int length
 */

void print_rev(char *s)
{
	int i, len, temp;  
	len = strlen(s);
	for (i = 0; i < len/2; i++)  
	{  
		temp = s[i];  
		s[i] = s[len - i - 1];  
		s[len - i - 1] = temp;  
	}
}
