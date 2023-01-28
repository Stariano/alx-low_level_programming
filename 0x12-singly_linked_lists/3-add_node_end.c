#include "lists.h"

/**
 * _strlenn - Returns the length of the string.
 * @s: The original Stirng
 * Return: Length of the string
 */

int _strlenn(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	return (i);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t node;
	list_t *last = *head;

	node = NULL;
	node = malloc(sizeof(list_t));
	
	if (new == NULL)
	{
		return (NULL);
	}
	
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	
	new->len = _strlenn(new->str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = node;
	
	return (node)
}

