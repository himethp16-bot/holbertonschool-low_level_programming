#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialise the variables within a struct
 * @d: pointer to said struct
 * @name: variable which holds name
 * @age: variable which holds age
 * @owner: variable which holds owner name
 *
 * Return: Void
 *
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
