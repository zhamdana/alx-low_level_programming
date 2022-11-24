#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: pointer to head
 *Return: return the number of nodes
 */
size_t list_len(const list_t *h)
{
	int k;

	for (k = 0; h != NULL; k++)
	{
		h = h->next;
	}
	return (k);
}
