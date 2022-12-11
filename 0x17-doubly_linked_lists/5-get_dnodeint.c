#include "lists.h"

/**
  * get_dnodeint_at_index - get nth node of a dlistint_t linked list
  * @head: header of double linked list
  * @index: index of the node, starting from 0
  * Return: a address of nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth;
	unsigned int i;

	nth = head;
	if (nth != NULL)
	{
		while (nth->prev != NULL)
			nth = nth->prev;

		for (i = 0; (i < index) && (nth != NULL); i++)
			nth = nth->next;
		return (nth);
	}
	else
		return (NULL);
}
