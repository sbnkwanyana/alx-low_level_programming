#include <ctype.h>

/**
 * is_lower - uses islower function from ctype header
 * Return: int
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
