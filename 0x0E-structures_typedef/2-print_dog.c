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
		exit(0);
	if ((*d).name == NULL)
		printf("Name: (nil)\n");
	if ((*d).owner == NULL)
		printf("Name: (nil)\n");
	if ((*d).age <= 0)
		printf("Age: (nil)\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
