#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a right child node.
 *
 * @parent: A pointer to the node where the child is to be inserted.
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);

	right_child = malloc(sizeof(binary_tree_t));
	if (right_child == NULL)
		return (NULL);

	right_child->parent = parent;
	right_child->n = value;
	right_child->left = NULL;

	right_child->right = right_child->parent->right;
	right_child->parent->right = right_child;

	if (right_child->right != NULL)
		right_child->right->parent = right_child;

	return (right_child);
}
