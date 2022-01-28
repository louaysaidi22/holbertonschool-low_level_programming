#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht:  the hash table you want to add or update the key/value to
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *aux;
	hash_node_t *new;
	unsigned long int i;

	if (!ht || !key)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	aux = ht->array[i];
	while (aux)
	{
		if (strcmp(aux->key, key) == 0)
		{
			free(aux->value);
			aux->value = strdup(value);
			if (!aux->value)
				return (0);
			return (1);
		}
		aux = aux->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
