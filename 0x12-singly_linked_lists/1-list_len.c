#include "lists.h"
/**
 * list_len - a function that returns the number
 * of elements in list_t list
 * @h: pointer to the head node of the linked list
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
