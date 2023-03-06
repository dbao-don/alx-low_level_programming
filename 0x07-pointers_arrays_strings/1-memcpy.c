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
	char *ptr = dest;
	while (n--)
		*ptr++ = *src++;
	return (dest);
}
