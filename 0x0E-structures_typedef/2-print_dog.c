#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - a function that prints
 * a struct dog
 * @d: pointer to struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if ((*d).name == NULL)
		printf("Name: (nil)");
	if ((*d).owner == NULL)
		printf("Owner: (nil)");
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
