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
	int fh_input;
	char *s;

	if (filename == NULL)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
		return (0);

	fh_input = open(filename, O_RDONLY);
	if (fh_input == -1)
	{
		free(s);
		return (0);
	}
	printed = read(fh_input, s, letters);
	if (printed == -1)
	{
		free(s);
		close(fh_input);
		return (0);
	}
	if (write(STDOUT_FILENO, s, printed) == -1)
	{
		free(s);
		close(fh_input);
		return (0);
	}
	close(fh_input);
	free(s);

	return (printed);
}
