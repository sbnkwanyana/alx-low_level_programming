#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *pntr;

	pntr = *head;
	if (head != NULL)
	{
		while (pntr != NULL)
		{
			*head = pntr->next;
			free(pntr);
		}
	}
	*head = NULL;
}
