#include "binary_trees.h"
int _tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 *
 * @tree: A pointer to the root node of a binary tree.
 *
 * Return: An unsigned integer value.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (_tree_height(tree->left) - _tree_height(tree->right));
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
