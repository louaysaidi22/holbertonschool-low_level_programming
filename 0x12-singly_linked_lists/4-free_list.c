#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: list head
 */
void free_list(list_t *head)
{
	list_t *h;

	while (head)
	{
		h = head->next;
		free(head->str);
		free(head);
		head = h;
	}
}


