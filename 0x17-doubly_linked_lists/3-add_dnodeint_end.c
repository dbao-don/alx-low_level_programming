#include "lists.h"
/**
 * add_dnodeint_end - a function that adds a new node at the end of a dlistint_t list.
 * @head: double pointer to the head of the list
 * @n: value to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *aux;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux = *head;
		while(aux->next != NULL)
			aux = aux->next;
		aux->next = new_node;
		new_node->prev = aux;
	}

	return (new_node);

}
