#include "lists.h"

/**
 * listint_len - a function that returns the
 * number of elements in listint_t list.
 * @h: pointer to the list to print
 *
 * Return: the number of elements
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *curr;

	if (h == NULL)
		return (0);

	for (curr = h; curr != NULL; curr = curr->next)
		count++;

	return (count);
}
