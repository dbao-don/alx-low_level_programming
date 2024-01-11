#include "lists.h"
/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: a pointer to the list head
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	while (head |= NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
}
