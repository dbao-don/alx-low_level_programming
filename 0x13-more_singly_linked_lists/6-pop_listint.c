#include "lists.h"

/**
 * pop_listint - a funtion that deletes the head node of a listint_t list
 * and returns the head node's data(n)
 * @head: pointer to pointer of the first node
 *
 * Return: 0 or n
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	curr = *head;
	n = curr->n;
	*head = (*head)->next;
	free(curr);

	return (n);
}
