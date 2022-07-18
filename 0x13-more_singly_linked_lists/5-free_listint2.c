#include "lists.h"

void free_listint2(listint_t **head)
{
	listint_t *pntr;

	pntr = *head;

	while (pntr != NULL)
	{
		free(pntr);
		pntr = pntr->next;
	}

	*head = NULL;
}
