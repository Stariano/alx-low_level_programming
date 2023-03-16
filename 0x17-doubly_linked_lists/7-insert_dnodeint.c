#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int check = idx;
	dlistint_t *new, *ptr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	ptr = *head;

	if (check == 0)
		return (add_dnodeint(h, n));

	while (check != 1)
	{
		ptr = ptr->next;
		if (tmp == NULL)
			return (NULL);
		check--;
	}
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	temp->next = new;

	return (new);
}

