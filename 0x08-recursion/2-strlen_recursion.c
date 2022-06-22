#include "main.h"

/**
 * _strlen_recursion - find the length of a string using recursion
 * @s: string input
 * Return: int count
 */

int _strlen_recursion(char *s)
{
	int count;

	if (*s)
	{
		count = 1 + _strlen_recursion(s + 1);
	}
	return (count);
}
