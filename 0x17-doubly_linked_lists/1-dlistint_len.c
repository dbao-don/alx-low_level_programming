#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements in a dll
 * @h: pointer to the head of the list
 *
 * Return: the number of element in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count_elem = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count_elem++;
		h = h->next;
	}

	return (count_elem);
}
