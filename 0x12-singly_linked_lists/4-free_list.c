#include "lists.h"
/**
 * free_list - frees a list
 * @head: head of the linked list
 */
void free_list(list_t *head)
{
	list_t *i;

	while ((i = head) != NULL)
	{
		head = head->next;
		free(i->str);
		free(i);
	}
}
