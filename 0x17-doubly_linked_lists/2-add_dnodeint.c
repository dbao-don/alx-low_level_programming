#include "lists.h"
/**
 * add_dnodeint - a function that adds a new node at the beginning of a dll
 * @head: double pointer to the head of the list
 * @n: value to be added
 *
 * Return: he address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
