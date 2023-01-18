#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strcpy - copy string
 * @s: string to copy
 * @len: len of string to copy
 * Return: copy string.
 */
char *_strcpy(char *s, int len)
{
	char *new_s;
	int i = 0;

	new_s = malloc(sizeof(char) * (len + 1));
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = s[i];
		i++;
	}
	new_s[i] = s[i];
	return (new_s);
}


/**
 * new_dog - entry point
 * @name: string from main, name of pet
 * @age: number from main, age of pet
 * @owner: string from main, owner of pet
 * Return: p
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *cpy_name, *cpy_owner;

	p = malloc(sizeof(dog_t));

	if (p == NULL)
		return (NULL);

	/* Copy strings */
	cpy_name = _strcpy(name, strlen(name));
	cpy_owner = _strcpy(owner, strlen(owner));

	if (!cpy_name || !cpy_owner)
	{	free(p);
		if (cpy_name)
			free(cpy_name);
		if (cpy_owner)
			free(cpy_owner);
		return (NULL);
	}

	p->name = name;
	p->age = age;
	p->owner = owner;
	return (p);
}
