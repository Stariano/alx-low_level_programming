#include "lists.h"

/**
 * _strlenn - Returns the length of the string.
 * @s: The original Stirng
 * Return: Length of the string
 */

int _strlenn(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
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
	list_t *node;
	list_t *last = *head;


	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}

	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	node->len = _strlenn(node->str);
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
	}

	while (last->next != NULL)
		last = last->next;

	last->next = node;

	return (node);
}

