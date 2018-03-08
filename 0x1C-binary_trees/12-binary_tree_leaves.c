#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 *
 * @tree: A pointer to the root node of a binary tree.
 *
 * Return: An unsigned integer value.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left)
	{
		if (!tree->right)
			leaves++;
	}

	if (tree->left)
	{
		binary_tree_leaves(tree->left);
		if (tree->right)
			binary_tree_leaves(tree->right);
		leaves++;
	}
	if (tree->right)
	{
		binary_tree_leaves(tree->right);
		if (tree->left)
			binary_tree_leaves(tree->left);
		leaves++;
	}

	return (leaves);
}
