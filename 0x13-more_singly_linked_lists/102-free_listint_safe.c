#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * free_listint_safe - frees a linked list and sets the head to NULL
 *
 * @h: a pointer to a pointer to the head of the list
 *
 * Return: the size of the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *slow = *h, *fast = *h, *tmp;
	size_t count = 0;

	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			slow = *h;

			while (slow != fast)
			{
				tmp = fast;
			}

			while (fast->next != slow)
			{
				tmp = fast;
				fast = fast->next;

				free(tmp), count++;
			}
			tmp = fast->next;

			free(fast), count++;
			while (tmp != slow)
			{
				fast = tmp;
				tmp = tmp->next;
				free(fast), count++;
			}
			break;
		}
	}

	while (*h)
	{
		tmp = *h;
		*h = (*h)->next;
		free(tmp), count++;
	}
	return (count);
}
