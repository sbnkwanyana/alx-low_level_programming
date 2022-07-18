#include "lists.h"

/**
 * pop_listint - function returns the data value
 * of the 1st node in the linked list
 * @head: linked list pointer to remove head from
 * Return: data value of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *node;

	node = *head;

	if (node == NULL)
	{
		return (0);
	}

	if (node->next != NULL)
	{
		*head = node->next;
	}

	return (node->n);
}
