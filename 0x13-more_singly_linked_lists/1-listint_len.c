#include "lists.h"

/**
 * listint_len - Returns the number of total element in a linked lists
 * @p: linked the list of type listint_t to traverse
 *
 * Return: Return number of nodes
 */

size_t listint_len(const listint_t *p)
{
	size_t num = 0;

	while (p)
{
num++;
p = p->next;
}

return (num);
}
