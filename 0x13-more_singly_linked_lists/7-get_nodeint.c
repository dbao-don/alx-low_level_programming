#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth
 * node of a listint_t linked list
 * @head: pointer to the first node
 * @index: nth node to find
 *
 * Return: nth node of listint_t linked list or NULL
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *curr;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	curr = head;
	while (curr && count < index)
	{
		curr = curr->next;
		count++;
	}
	return (curr);
}
