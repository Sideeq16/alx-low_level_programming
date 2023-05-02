#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - print all node element
 * @head: node head
 * @n: number to add
 * Return: number of element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newptr, *temp;

	newptr = malloc(sizeof(listint_t));

	if (newptr == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_node;

	return (new_node);
}
