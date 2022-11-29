#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list
 * Return: return head node's data.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *j;
	listint_t *k;

	if (*head == NULL)
		return (0);
	k = *head;
	i = k->n;
	j = k->next;
	free(k);
	*head = j;
	return (i);
}
