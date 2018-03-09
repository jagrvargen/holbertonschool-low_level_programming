#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node.
 *
 * @node: A pointer to the node to check.
 *
 * Return: A pointer to the sibling node, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node || !node->parent)
		return (NULL);

	sibling = node->parent;

	if (sibling->left == NULL || sibling->right == NULL)
		return (NULL);

	if (sibling->left == node)
		sibling = sibling->right;
	else
		sibling = sibling->left;

	return (sibling);
}
