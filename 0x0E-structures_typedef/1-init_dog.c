#include <stdio.h>
/**
 * void init_dog - initialize the dog
 * @d: pointer
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if(d)
	{
		d->name = name;
		(*d).age = age;
		d->owner = owner;
	}
}
