#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree from a given node.
 *
 * @node: A pointer to the node from which depth is measured.
 *
 * Return: An unsigned integer value.
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node->parent != NULL)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
