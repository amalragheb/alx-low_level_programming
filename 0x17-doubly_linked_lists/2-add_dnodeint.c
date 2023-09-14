#include "lists.h"
/**
 * add_dnodeint - add new node at the beginning of a dlistint_t list.
 * @head: pointer to head pointer
 * @n: integer value
 * Return: node address or null in fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;

	return (*head);
}
