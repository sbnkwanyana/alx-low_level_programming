#include "lists.h"

/**
 * free_listint - function frees memory allocations of linked list nodes
 * @head: linked list node to free
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp_holder;
	temp_holder = head;
	if (head != NULL)
	{
		while (head != NULL)
		{
			temp_holder = head->next;
			free(temp_holder);
		}
	}
}
