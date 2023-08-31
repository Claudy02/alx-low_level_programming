#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - a function that prints a linked list
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *) slow, slow->n);
			count++;

			slow = head;
			while (slow != fast)
			{
				printf("[%p] %d\n", (void *) slow, slow->n);
				count++;

				slow = slow->next;
				fast = fast->next;
			}

			printf("-> [%p] %d\n", (void *)slow, slow->n);
			count++;
			break;
		}
	}

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		count++;
		slow = slow->next;
	}
	return (count);
}
