#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: int input
 * Return: int factorial
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
