#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: Null or pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *con_cat;
	int i = 0, j = 0, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	con_cat = malloc(sizeof(char) * (i + j + 1));
	if (con_cat == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		con_cat[k] = s1[k];
	for (l = 0; l < j; l++)
		con_cat[l + i] = s2[l];
	con_cat[i + j] = '\0';
	return (con_cat);
}
