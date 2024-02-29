#include "binary_trees.h"


/**
 * binary_tree_sibling - that finds the sibling of a node
 * @node: Node in a binary tree
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
