#include "main.h"
/**
 * _strcpy - a function that copies
 * the string pointed to by src,
 * including the terminating null
 * byte (\0), to the buffer
 * pointed to by dest.
 * @dest: pointer to character
 * @src: pointer to string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while
		((*dest++ = *src++));
	return (c);
}
