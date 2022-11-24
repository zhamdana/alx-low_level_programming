#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string to store in the list.
 * Return: return address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i, *j;
	size_t k;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	for (k = 0; str[k]; k++)
		;
	i->len = k;
	i->next = NULL;
	j = *head;
	if (j == NULL)
	{
		*head = i;
	}
	else
	{
		while (j->next != NULL)
			j = j->next;
		j->next = i;
	}
	return (*head);
}
