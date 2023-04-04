#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new
 * node at a given position.
 * @head: double pointer to the first node
 * @idx: index to add node
 * @n: value to add
 *
 * Return: 0
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	curr = *head;
	for (i = 0; curr != NULL && i < idx - 1; i++)
		curr = curr->next;
	if (i != idx - 1)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = curr->next;
	curr->next = new_node;
	return (new_node);
}
