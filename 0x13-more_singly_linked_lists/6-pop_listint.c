#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: head list
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int m;

	if (*head == NULL)
		return (0);
	m = (*head)->n;
	h = (*head)->next;
	free(*head);
	*head = h;
	return (m);
}
