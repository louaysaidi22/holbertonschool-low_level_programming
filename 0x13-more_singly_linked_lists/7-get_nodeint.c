#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list.
 * @head: list head
 * @index: node position to return
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
