#include "lists.h"
int _strlen(char *s);
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 *
 * @head: A pointer to a pointer.
 * @str: A pointer to a string.
 *
 * Return: A pointer to a node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *pointer;

	if (head == NULL || str == NULL)
		return (NULL);
	pointer = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		while (pointer->next != NULL)
			pointer = pointer->next;
	}
	pointer->next = new_node;
	return (new_node);
}

/**
 * _strlen - Returns the length of a string.
 *
 * @s: A pointer to a string.
 *
 * Return: An integer value.
 */
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0';)
		i++;

	return (i);
}
