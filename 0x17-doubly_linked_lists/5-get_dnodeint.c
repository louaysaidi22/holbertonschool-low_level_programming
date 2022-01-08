#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 * @head: linked list
 * @index: node index
 * Return: node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	node = head;
	while (node->next)
	{
	if (i == index)
		return (node);
	node = node->next;
	i++;
	}
	return (NULL);
}
