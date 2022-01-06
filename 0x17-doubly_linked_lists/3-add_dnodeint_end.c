#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: linked list
 * @n: new node value
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *list;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	list = *head;
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (list->next)
			list = list->next;
		list->next = new;
		new->prev = list;
	}
	return (new);
}
