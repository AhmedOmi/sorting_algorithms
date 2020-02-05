#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * insertion_sort_list - function to sorting list with insertion
 * @list: pointer to point of listint_t
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *new_list;
listint_t *old_list;
listint_t *tmp;
if (list == NULL)
return;
else if ((*list)->next == NULL && (*list)->prev == NULL)
print_list(*list);
tmp = *list;
old_list = tmp->prev;
new_list = tmp->next;
while (old_list != NULL && old_list->n > tmp->n)
{
tmp = tmp->next;
if (tmp->next != NULL)
tmp= old_list;
new_list = old_list;
old_list = old_list->prev;
new_list->prev = tmp;
print_list(*list);
}
tmp = tmp->next;
}
