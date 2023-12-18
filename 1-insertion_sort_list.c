#include "sort.h"

/**
 * insertion_sort_list - sort a linked list
 * @list: the list to be sorted
 *
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next_node, *temp;

	if (list == NULL || *list == NULL)
		return;
	current = (*list)->next;
	while (current)
	{
		next_node = current->next;
		while (current->prev && current->prev->n > current->n)
		{
			temp = current->prev;
			if (current->next)
				current->next->prev = temp;
			if (temp->prev)
				temp->prev->next = current;
			else
				*list = current;
			current->prev = temp->prev;
			temp->prev = current;
			temp->next = current->next;
			current->next = temp;
			print_list(*list);
		}
		current = next_node;
	}
}
