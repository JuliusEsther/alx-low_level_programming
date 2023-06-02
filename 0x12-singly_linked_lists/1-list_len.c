#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: Returns number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t p = 0;

	while (h)
{
	p++;
	h = h->next;
}
	return (p);
}
