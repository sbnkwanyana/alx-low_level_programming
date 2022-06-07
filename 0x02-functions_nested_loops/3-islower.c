#include <ctype.h>

/**
 * _islower - uses islower function from ctype header
 *  - input
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
