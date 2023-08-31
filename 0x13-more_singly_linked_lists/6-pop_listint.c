#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - a function that deletes the head node of
 * a linked list, and returns the head node’s data (n)
 * @head: pointer to the head of the list
 * Return: the head node's data (n) or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	if (*head == NULL)
	{
		return (0);
	}

	int data = (*head)->n;
	listint_t *tmp = *head;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
