#include "main.h"

/**
 * string_nconcat - a function that concatenates
 * two strings.
 * @s1: first string
 * @s2: second string to join s1
 * @n: length of s2 to join to s1
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n >= j)
		n = j;
	ptr = malloc(sizeof(char) * n + i + 1);
	if (ptr == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		ptr[k] = s1[k];
	for (k = 0; k < n; k++)
		ptr[i + k] = s2[k];
	ptr[i + k] = '\0';
	return (ptr);
}
