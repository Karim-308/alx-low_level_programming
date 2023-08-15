#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes a dog struct
 * @d: structure pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: character pointer (dog's name)
 *
 * Description: initialize a struct of type Dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->owner = owner;
		d->name = name;
		d->age = age;
	}
}
