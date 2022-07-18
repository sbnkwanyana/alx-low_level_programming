#include "lists.h"

/**
 * free_listint - function frees memory allocations of linked list nodes
 * @head: linked list node to free
 * Return: void
 */

void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		while (head != NULL)
		{
			free(head);
			head = head->next;
		}
	}
}
