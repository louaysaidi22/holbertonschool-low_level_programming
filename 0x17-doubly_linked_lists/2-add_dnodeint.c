#include "lists.h"
/**
 * add_dnodeint - function that adds a new node
 * at the beginning of a dlistint_t list.
 * @head: linked list
 * @n: new node value
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	return (new);
}
