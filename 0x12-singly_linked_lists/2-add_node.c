#include "lists.h"
/**
 * add_node - a function that adds a new node at the
 * beginning of a list_t list
 * @head: pointer that points to the head of the list
 * @str: string to be added to the list
 * Return: address to the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
