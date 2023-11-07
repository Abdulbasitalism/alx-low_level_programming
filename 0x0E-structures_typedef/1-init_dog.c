#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: pointer to the variable structure.
 * @name: first type.
 * @age: second type.
 * @owner: third type.
 *
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
