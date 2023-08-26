#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - a function that frees a list
 * @head: head var
 */
void free_list(list_t *head)
{
	list_t *temporary;

	while (head != NULL)
	{
		temporary = head->next;
		free(head->str);
		free(head);
		head = temporary;
	}
}
