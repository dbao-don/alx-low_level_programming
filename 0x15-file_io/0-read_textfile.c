#include "main.h"
/**
 * read_textfile - a function that reads a text and
 * prints it to the POSIX standard output.
 * @filename: file to read.
 * @letters: amount of letters to print
 *
 * Return: 0 or actal number of letters it could print
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printed = 0;
	size_t i;
	FILE *fh_input;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);

	fh_input = fopen(filename, "r");
	if (fh_input == NULL)
		return (0);
	for (i = 0; i < letters; i++)
		fscanf(fh_input, "%c", &s[i]);
	while (s[printed] != '\0')
	{
		putchar(s[printed]);
		printed++;
	}
	fclose(fh_input);
	free(s);

	return (printed);
}
