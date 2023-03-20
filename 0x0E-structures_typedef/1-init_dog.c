#include "dog.h"
/**
 * init_dog - a function that initialize a
 * variable of type dog.
 * @d: pointer to declared struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
