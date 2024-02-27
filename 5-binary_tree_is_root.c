#include "binary_trees.h"


/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: Pointer to a binary tree node
 * Return: 1 in case if node is a root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
