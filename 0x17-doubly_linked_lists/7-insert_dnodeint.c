#include "lists.h"
/**
 * insert_dnodeint_at_index - function that inserts
 * a new node at a given position.
 * @h: linked list
 * @idx: position to insert new node
 * @n: new node n
 * Return: new node or null
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *node;
	unsigned int i = 1;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = new->prev = NULL;
	node = *h;
	if (idx == 0)
	{
		if (*h != NULL)
		{
			new->next = node;
			node->prev = new;
		}
		*h = new;
		return (new);
	}
	while (node)
	{
		if (i == idx)
		{
			new->next = node->next;
			new->prev = node;
			node->next = new;
			return (new);
		}
		node = node->next;
		i++;
		}
	return (NULL);
}
