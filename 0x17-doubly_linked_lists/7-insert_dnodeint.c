#include "lists.h"

/**
  * insert_dnodeint_at_index -  inserts a new node at a given position
  * @h: header of double linked list
  * @idx: index of the node, starting from 0
  * @n: is a given number
  * Return: a address of nth node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *element = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (element != NULL && element->prev != NULL)
	{
		element = element->prev;
		*h = (*h)->prev;
	}
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}

	for (i = 0; (i < idx - 1) && element != NULL; i++)
		element = element->next;
	if (element == NULL)
	{
		free(new);
		return (NULL);
	}
	if (element->next == NULL)
	{
		new->next = NULL;
		new->prev = element;
		element->next = new;
	} else
	{
		new->next = element->next;
		new->prev = element;
		element->next->prev = new;
		element->next = new;
	}
	return (new);
}