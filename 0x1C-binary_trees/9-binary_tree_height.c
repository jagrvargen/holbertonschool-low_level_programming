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
	size_t max = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		binary_tree_height(tree->left);
		max++;
	}
	if (tree->right)
	{
		binary_tree_height(tree->right);
		max++;
	}
	return (max);
}
