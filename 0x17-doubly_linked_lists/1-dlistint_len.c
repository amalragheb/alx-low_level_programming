#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 *
 * @h: head of list.
 *
 * Return: the number of nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
