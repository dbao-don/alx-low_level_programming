#include "lists.h"

/**
 * add_nodeint_end - a function that adds a
 * new node at the end of a listint_t list
 * @head: pointer to list at first node
 * @n: value to be added to new node
 *
 * Return: address to new element or NULL
 *
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (curr != NULL && curr->next != NULL)
		curr = curr->next;
	curr->next = new_node;
	return (new_node);
}
