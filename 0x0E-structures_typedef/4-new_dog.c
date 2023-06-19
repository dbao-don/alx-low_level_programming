#include "dog.h"

/**
 * new_dog - a function that creates
 * a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *sec_dog;
	char *copy_name, *copy_owner;
	int len_name = 0, len_owner = 0, i, j;

	while (name[len_name] != '\0')
		len_name++;
	while (owner[len_owner] != '\0')
		len_owner++;
	sec_dog = malloc(sizeof(dog_t));
	if (sec_dog == NULL)
		return (NULL);
	copy_name = malloc((len_name + 1) * sizeof(char));
	if (copy_name == NULL)
	{
		free(sec_dog);
		return (NULL);
	}
	for (i = 0; i < len_name; i++)
		copy_name[i] = name[i];
	copy_name[len_name] = '\0';
	copy_owner = malloc((len_owner + 1) * sizeof(char));
	if (copy_owner == NULL)
	{
		free(copy_name);
		free(sec_dog);
		return (NULL);
	}
	for (j = 0; j < len_owner; j++)
		copy_owner[j] = owner[j];
	copy_owner[len_owner] = '\0';

	sec_dog->name = copy_name;
	sec_dog->age = age;
	sec_dog->owner = copy_owner;
	return (sec_dog);
}
