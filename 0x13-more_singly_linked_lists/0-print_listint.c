#include "lists.h"

/**
 * print_listint - a function that prints all
 * the elements of a listinst_t lists.
 * @h: pointer to the list to print to STDOUT
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *curr;

	if (h == NULL)
		return (0);

	for (curr = h; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->n);
		count++;
	}

	return (count);
}
