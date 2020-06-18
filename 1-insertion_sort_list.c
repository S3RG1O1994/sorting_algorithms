#include "sort.h"

/**
 * init - Get the head of a doubly linked list
 * @tmp: node in linked list
 * Return: head of linked list
 */

listint_t *init(listint_t *tmp)
{
	while (tmp->prev)
		tmp = tmp->prev;

	return (tmp);
}

/**
 * insertion_sort_list - Sort a doubly linked list of integers
 * in ascending order using insertion sort algorithm.
 * @list: doubly linked list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp, *tmp2, *aux;

	if (list == NULL)
		return;
	tmp = init(*list);

	for (tmp = tmp->next; tmp;)
	{
		tmp2 = tmp->next;
		while (tmp->prev && tmp->n < tmp->prev->n)
		{
			aux = tmp->prev;
			aux->next = tmp->next;
			tmp->prev = aux->prev;
			aux->prev = tmp;
			tmp->next = aux;
			if (aux->next)
				aux->next->prev = aux;
			if (tmp->prev)
				tmp->prev->next = tmp;
			print_list(init(*list));
		}
		tmp = tmp2;
	}
	*list = init(*list);
}
