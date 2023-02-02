#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given
 *                           index of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @index: The index of the node to be deleted - indices start at 0.
 *
 * Return: On success - 1.
 *         On failure - -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;

	if (temp == NULL)
		return (-1)

	while (index > 0)
	{
		if (temp == NULL || temp->next == NULL)
			return (-1);
		temp = temp->next;
		idx--;
	}
	*head = temp;
	free(*head);
	*head = temp;
	temp = NULL;

	return (1);
}
