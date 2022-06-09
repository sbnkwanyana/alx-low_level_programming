#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isupper -
 * @c: input 
 * Return: int
 * 
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}