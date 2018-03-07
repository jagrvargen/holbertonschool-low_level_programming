#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child node.
 *
 * @parent: A pointer to the parent node.
 * @value: A value to store in the new node.
 *
 * Return: A pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	if (parent == NULL)
		return (NULL);

	left_child = malloc(sizeof(binary_tree_t));
	if (left_child == NULL)
		return (NULL);

	left_child->parent = parent;
	left_child->n = value;
	left_child->right = NULL;

	left_child->left = left_child->parent->left;
	left_child->parent->left = left_child;

	if (left_child->left != NULL)
		left_child->left->parent = left_child;

	return (left_child);
}
