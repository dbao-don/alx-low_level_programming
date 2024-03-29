#include "lists.h"
/**
 * sum_dlistint - a function that returns the sum of all the data (n) of dll
 * @head: pointer to the head of the list
 *
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
