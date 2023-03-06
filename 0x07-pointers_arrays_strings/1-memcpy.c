#include "main.h"
/**
 * _memcpy - a function that
 * copies memory area.
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: size of byte to be copied
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++ =  src[i];
	}
	return (dest);
}
