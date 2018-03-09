#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 *
 * @tree: A pointer to the root node of the binary tree.
 *
 * Return: An unsigned integer value.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int check;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->right && !tree->left) || (tree->left && !tree->right))
		return (0);

	if (tree->left && tree->right)
	{
		check = binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right);
		return (check);
	}
	return (0);
}
