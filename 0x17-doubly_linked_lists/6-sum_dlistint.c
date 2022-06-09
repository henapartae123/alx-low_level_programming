#include "lists.h"

/**
  * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
  * @head: header of double linked list
  * Return: the sum of all nodes
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *elements;
	int sum = 0;

	elements = head;
	if (elements != NULL)
	{
		while (elements->prev != NULL)
			elements = elements->prev;

		while (elements != NULL)
		{
			sum += elements->n;
			elements = elements->next;
		}
		return (sum);
	}
	else
		return (0);
}