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
	dest[i] = '\0';
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
	int len1, len2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	len1 = _strlen(name) + 1;
	d->name = malloc(sizeof(char) * len1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	len2 = _strlen(owner) + 1;
	d->owner = malloc(sizeof(char) * len2);
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
