#include "lists.h"

/**
 * check_cycle - checks if a singly linked list have a cycle
 *
 * @list: linked list
 *
 * Return: intiger
 */
int check_cycle(listint_t *list)
{
	listint_t *lts = list;
	listint_t *aux = lts;

	while (lts && aux && lts->next)
	{
		aux = aux->next;
		lts = lts->next->next;
		if (aux == lts)
			return (1);
	}
	return (0);
}
