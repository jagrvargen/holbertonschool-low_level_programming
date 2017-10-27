#include "lists.h"
int _strlen(char *s);
/**
 * add_node - A function that adds a new node at the beginning of a list.
 *
 * @head: A pointer to a pointer.
 * @str: A pointer to a string.
 *
 * Return: A pointer to a new node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node->str);
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	if (head != NULL)
		new_node->next = *head;
	*head = new_node;

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
