#ifndef DOG

#define DOG

/**
 * struct dog - represents dog structure
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
