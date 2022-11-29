#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 * Return: return 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *j;
	listint_t *k;

	j = *head;
	if (index != 0)
	{
		for (i = 0; i < index - 1 && j != NULL; i++)
		{
			j = j->k;
		}
	}
	if (j == NULL || (j->k == NULL && index != 0))
	{
		return (-1);
	}
	k = j->k;
	if (index != 0)
	{
		j->k = k->k;
		free(k);
	}
	else
	{
		free(j);
		*head = k;
	}
	return (1);
}
