#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 *
 * Return: pointer to the concatenated string(on success)
 * or NULL(on failure)
 */
char *str_concat(char *s1, char *s2)
{
	char *s1_s2;
	int s1_len = 0, s2_len = 0, len, temp_len;

	/* checks if s1 or s2 are null and set to empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calculate the size of s1 and s2 */
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	len = s1_len + s2_len + 1;

	/* use malloc to assign the size of s1_s2 */
	s1_s2 = malloc(len * sizeof(char));

	/* if malloc fails return null */
	if (s1_s2 == NULL)
		return (NULL);

	/* add the contents of s1 and s2 to s1_s2 */
	for (temp_len = 0; temp_len < s1_len; temp_len++)
		s1_s2[temp_len] = s1[temp_len];
	for (temp_len = 0; temp_len < s2_len; temp_len++)
		s1_s2[temp_len + s1_len] = s2[temp_len];

	/* terminate the string */
	s1_s2[len - 1] = '\0';

	return (s1_s2);
}
