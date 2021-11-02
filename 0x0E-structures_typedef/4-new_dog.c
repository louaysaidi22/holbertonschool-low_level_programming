#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen -  function that returns the length of a string.
 * @s: point to a string.
 * Return: string lenght.
 */

int _strlen(char *s)
{
	int n = 0;

	while (s[n])
	n++;
	return (n);
}
/**
 * _strcpy - function that copies the string pointed to by src.
 * @dest: point to a string.
 * @src: point to a string.
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
/**
 * new_dog - function that creates a new dog.
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: NULL or dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
