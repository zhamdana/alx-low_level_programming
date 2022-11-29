#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of a list
 * @idx: index of the list where the new node is added
 * @n: integer element
 * Return: the address of the new node or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *j;
	listint_t *k;

	k = *head;
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && k != NULL; i++)
		{
			k = k->next;
		}
	}
	if (k == NULL && idx != 0)
		return (NULL);
	j = malloc(sizeof(listint_t));
	if (j == NULL)
		return (NULL);
	j->n = n;
	if (idx == 0)
	{
		j->next = *head;
		*head = j;
	}
	else
	{
		j->next = k->next;
		k->next = j;
	}
	return (j);
}
