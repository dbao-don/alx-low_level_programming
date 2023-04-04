#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: pointer to the first node.
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *curr, *aux;

	if (head == NULL)
		return;
	curr = *head;
	while (curr != NULL)
	{
		aux = curr;
		curr = curr->next;
		free(aux);
	}
	*head = NULL;
}
