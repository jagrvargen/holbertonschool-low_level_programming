#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: A pointer to the root node of a binary tree
 *
 * Return: An integer 1 for true, 0 for false.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (binary_tree_is_full(tree) && binary_tree_balance(tree));
}

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
		check = binary_tree_is_full(tree->left) &&\
			binary_tree_is_full(tree->right);
		return (check);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of a binary tree.
 *
 * Return: An unsigned integer value.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int check;

	if (tree == NULL)
		return (0);

	check = _tree_height(tree->left) - _tree_height(tree->right);
	if (check != 0)
		return (0);
	return (1);
}

/**
 * _tree_height - Measures the height of a binary tree.
 *
 * @tree: A pointer to the root of a binary tree.
 *
 * Return: An unsigned integer value indicating the height of the tree.
 */
int _tree_height(const binary_tree_t *tree)
{
	int max_l;
	int max_r;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	max_l = _tree_height(tree->left) + 1;
	max_r = _tree_height(tree->right) + 1;

	if (max_l >= max_r)
		return (max_l);
	return (max_r);
}
