#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - print all node element
 * @head: head
 * @str: string to copy
 * Return: address of the new element
 */

size_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
