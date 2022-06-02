#include <stdio.h>
#include <stdint.h>
/**
 * main - Entry point
 *  Print sizeof (type)
 * Return: 0 (Success)
 */
int main(void)
{
printf("Size of a char %lu\n", sizeof( char ));
printf("Size of a int %lu\n", sizeof( int ));
printf("Size of a long int %lu\n", sizeof( long ));
printf("Size of a long long int %lu\n", sizeof( long long ));
printf("Size of a float %lu\n", sizeof( float ));
return (0);
}
