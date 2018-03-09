#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node.
 *
 * @node: A pointer to the node.
 *
 * Return: A pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle;
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;
	if (parent->parent == NULL)
		return (NULL);

	uncle = parent->parent;
	if (uncle->left == NULL || uncle->right == NULL)
		return (NULL);

	if (uncle->left == parent)
		uncle = uncle->right;
	else
		uncle = uncle->left;

	return (uncle);
}
