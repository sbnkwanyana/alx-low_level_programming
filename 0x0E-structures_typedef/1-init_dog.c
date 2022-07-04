#include "main.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog stuct
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}
