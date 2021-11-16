#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: singly linked list
 * Return: list length
 */
size_t print_listint(const listint_t *h)
{
	size_t l = 0;

	while (h)
	{
		printf("%i\n",h->n);
		h= h->next;
		l++;
	}
	return (l);
}
