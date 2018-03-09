#include "binary_trees.h"
int is_full(const binary_tree_t *tree);
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
		check = is_full(tree);
	return (check);
}

/**
 * is_full - Checks if both branches of tree are full.
 *
 * @tree: A pointer to the root node.
 *
 * Return: An integer 1 for full, 0 otherwise.
 */
int is_full(const binary_tree_t *tree)
{
	int check;

	if (tree->left && tree->right)
		check = is_full(tree->left) && is_full(tree->right);
	return (check);
}
