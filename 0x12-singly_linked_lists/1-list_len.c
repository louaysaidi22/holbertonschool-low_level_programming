#include "lists.h"
/**
 * list_len -  function that eturns the number
 * of elements in a linked list_t list.
 * @h: singly linked list.
 * Return: list size.
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		h = h->next;
		l++;
	}
	return (l);
}
