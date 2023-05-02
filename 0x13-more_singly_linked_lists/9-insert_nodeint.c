#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - free pointer
 * @head: node head
 * @idx: index to find
 * @n: data to use
 * Return: index of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i, len = 0;

	if (head == NULL)
		return (NULL);

	temp = *head;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}

	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
		new_node->next = temp->next;
		temp->next = new_node;

	return (new_node);
}
