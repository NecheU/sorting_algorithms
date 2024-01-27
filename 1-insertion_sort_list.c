#include "sort.h"
#include <stdio.h>
/**
 * insertion_sort_list - Sorts a list of int usimg doubly linked list
 * @list: contents of the list to be sorted
 *
 * Return: nothing
 */

void insertion_sort_list(listint_t **list)
{
listint_t *comprd_node, *j;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

comprd_node = (*list)->next;

while (comprd_node)
{
j = comprd_node->next;

while (comprd_node->prev != NULL && comprd_node->n < comprd_node->prev->n)
{
comprd_node->prev->next = comprd_node->next;

if (comprd_node->next != NULL)
comprd_node->next->prev = comprd_node->prev;

comprd_node->next = comprd_node->prev;
comprd_node->prev = comprd_node->prev->prev;

if (comprd_node->prev != NULL)
comprd_node->prev->next = comprd_node;
else
*list = comprd_node;
if (comprd_node->next != NULL)
comprd_node->next->prev = comprd_node;

print_list(*list);
}
comprd_node = j;
}
}
