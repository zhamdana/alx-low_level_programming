#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to store
 * Return: return address of the head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *i;
	size_t j;

	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	for (j = 0; str[j]; j++)
		;
	i->len = j;
	i->next = *head;
	*head = i;
	return (*head);
}
