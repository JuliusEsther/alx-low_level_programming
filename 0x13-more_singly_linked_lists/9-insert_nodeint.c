#include "lists.h"

/**
* insert_nodeint_at_index - inserts new node in a linked list,
* at a given position
* @head: pointer of the first node in the list
* @idx: index where the new node is added
* @n: data to insert in the new node
*
* Return: pointer of the new node, or NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int p;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (p = 0; temp && p < idx; p++)
{
if (p == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}
