#include "lists.h"
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: list head
 * @str: string
 * Return: head or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int l = 0;

	while (str[l])
		l++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = l;
	new->next = *head;
	*head = new;
	return (new);
}
