#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to the list.
 **/
void free_list(list_t *head)
{
	list_t *node;
	list_t *next_node;

	if (head)
	{
		node = head;
		next_node = head->next;
		while (next_node)
		{
			free(node->str);
			free(node);
			node = next_node;
			next_node = next_node->next;
		}
		free(node->str);
		free(node);
	}
}

