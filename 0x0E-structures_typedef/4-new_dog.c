#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * _strlen -  function that returns the length of a string.
 * @s: char type pointer
 *
 * Return: string
 */

int _strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: a pointer to the structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t	*new_dog;
	int	i;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
	new_dog->name = malloc(_strlen(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (i <= _strlen(name))
	{
		new_dog->name[i] = name[i];
		i++;
	}
	new_dog->owner = malloc(_strlen(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	i = 0;
	while (i <= _strlen(owner))
	{
		new_dog->owner[i] = owner[i];
		i++;
	}
	new_dog->age = age;
	return (new_dog);
}
