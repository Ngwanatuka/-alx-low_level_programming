#include "dog.h"

/**
 * init_dog - init a variable of
 * type dog
 * @d: dog identification
 * @name: name of the dog
 * @age: of the dog
 * @owner: owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
