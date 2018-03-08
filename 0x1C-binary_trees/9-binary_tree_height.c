#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: An unsigned integer value indicating the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t max_l;
	size_t max_r;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	max_l = binary_tree_height(tree->left) + 1;
	max_r = binary_tree_height(tree->right) + 1;

	if (max_l >= max_r)
		return (max_l);
	return (max_r);
}
