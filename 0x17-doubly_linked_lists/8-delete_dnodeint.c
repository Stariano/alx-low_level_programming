#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	while (index)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		index--;
	}

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;
	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	free(tmp);
	return (1);
}
