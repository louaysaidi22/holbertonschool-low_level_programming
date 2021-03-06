#include "lists.h"
/**
 * print_dlistint -function that prints
 * all the elements of a dlistint_t list.
 * @h: linked list
 * Return: linked list size
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		l++;
	}
	return (l);
}
