#include "dog.h"
#include <stdio.h>

/**
 * print_dog - initializes a dog struct
 * @d: structure pointer
 *
 * Description: prints the dog content
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		/* You can't check a float against NULL. Assuming you've a valid age always */
		printf("Age: %f\n", d->age);

		if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
