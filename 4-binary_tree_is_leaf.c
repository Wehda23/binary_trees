#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to a binary tree node
 * Return: 1 in case if node is a leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if ((node->left == NULL && node->right == NULL))
	{
		return (1);
	}
	return (0);
}
