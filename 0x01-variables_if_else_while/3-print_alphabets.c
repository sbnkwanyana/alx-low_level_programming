#include <stdio.h>
/**
 * main - entry point
 * description prints alphabet lowercase and uppercase
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
