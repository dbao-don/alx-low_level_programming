#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a dlistint_t list.
 *
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while(h != Null)
	{
		print("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}