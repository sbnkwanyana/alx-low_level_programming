#include "main.h"
#include <string.h>

/**
 * string_toupper - converts to uppercase string parameter
 * @str: input string
 * Return: string pointer
 */

char *string_toupper(char str)
{
	return (strupr(str));
}
