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
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	*head = (*head)->next;
	n = temp->n;
	free(temp);

	return (n);
}
