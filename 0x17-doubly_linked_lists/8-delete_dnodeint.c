#include "lists.h"

/**
  * delete_dnodeint_at_index - Deletes the node at idx of a double linked list
  * @head: header of double linked list
  * @index: index of the node, starting from 0
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pre, *element = *head;
	unsigned int i;

	while (element != NULL && element->prev != NULL)
	{
		element = element->prev;
		*head = (*head)->prev;
	}
	if (element != NULL && index != 0)
	{
		for (i = 0; i < index && element != NULL; i++)
		{
			pre = element;
			element = element->next;
		}
		if (element != NULL)
		{
			pre->next = element->next;
			if (pre->next != NULL)
				element->next->prev = pre;
			free(element);
			return (1);
		}
		return (-1);
	}
	if (element != NULL && index == 0)
	{
		pre = element->next;
		if (pre == NULL)
			*head = NULL;
		else
		{
			pre->prev = NULL;
			free(element);
			*head = pre;
		}
		return (1);
	}
	return (-1);
}