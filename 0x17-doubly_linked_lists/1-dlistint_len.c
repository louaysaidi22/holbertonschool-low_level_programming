#include "lists.h"
/**
 * dlistint_len - function that returns the number
 * of elements in a linked dlistint_t list
 * @h: linked list
 * Return: linked list size
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
