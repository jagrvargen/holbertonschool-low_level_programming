#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using preorder traversal.
 *
 * @tree: A pointer ti the root node.
 * @func: A pointer to a function which will print a node's n value.
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	(*func)(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
