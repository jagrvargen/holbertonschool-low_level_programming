#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least one child in a binary
 * tree.
 *
 * @tree: A pointer to the root node of the tree.
 *
 * Return: An unsigned integer value.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
}
