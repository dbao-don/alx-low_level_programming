#include "lists.h"

/**
 * sum_listint - a function that returns the
 * sum of all the data(n) of a listint_t lined list
 * @head: pointer to the first node
 *
 * Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *curr;

	if (head == NULL)
		return (0);

	curr = head;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
