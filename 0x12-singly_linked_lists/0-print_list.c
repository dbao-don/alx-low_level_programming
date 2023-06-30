#include "lists.h"
/**
 * print_list - a function that prints all the
 * elements of a list_t list.
 * @h: list containing elements to print
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);
		count++;
		h = h->next;
	}
	return (count);
}
