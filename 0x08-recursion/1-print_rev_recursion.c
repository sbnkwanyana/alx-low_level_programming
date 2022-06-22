#include "main.h"

/**
 * _puts_recursion - uses putchar to print given string in reverse
 * @s: string input
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_puchar(*s);
	}
}
