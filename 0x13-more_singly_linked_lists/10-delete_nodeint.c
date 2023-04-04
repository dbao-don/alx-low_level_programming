#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index of a listint_t linked list
 * @head: double pointer to the first node
 * @index: node to delete
 *
 * Return: 1 or -1
 *
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr, *aux;

	if (*head == NULL)
		return (-1);
	curr = *head;
	if (index == 0)
	{
		curr = curr->next;
		free(*head);
		*head = curr;
		return (1);
	}
	for (i = 0; curr != NULL && i < index - 1; i++)
		curr = curr->next;
	if (i != index - 1)
		return (-1);
	aux = curr;
	curr = curr->next;
	aux->next = curr->next;
	free(curr);
	return (1);
}
