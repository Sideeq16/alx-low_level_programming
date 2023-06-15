#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - print element in doubly link
 * @head: head node
 * Return: number of elmement in node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
