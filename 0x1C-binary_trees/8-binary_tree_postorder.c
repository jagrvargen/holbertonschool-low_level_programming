#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes through a binary tree using postorder traversal
 *
 * @tree: A pointer to the root node of the binary tree.
 * @func: A pointer to a function which will print the tree.
 *
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->right, func);
	(*func)(tree->n);
	binary_tree_postorder(tree->left, func);
}
