#include "main.h"
int _strlen(char *s);
/**
 * append_text_to_file - a function that
 * appends text at the end of a file.
 * @filename: pointer to a file directory
 * @text_content: pointer to content file
 *
 * Return: 1 or -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, len;
	ssize_t bytes;

	if (filename == NULL)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = _strlen(text_content);
		bytes = write(file_desc, text_content, len);
		if (bytes != (ssize_t)len)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
/**
 * _strlen - a function that returns
 * the length of a string.
 *  * @s: pointer to a string.
 *
 * Return: length of string
 *
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
