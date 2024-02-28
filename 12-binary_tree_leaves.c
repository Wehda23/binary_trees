#include "binary_trees.h"


/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: Pointer to the node in binary tree
 * Return: Number of leaves. If empty, returns 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t  count = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		count++;
	}

	count += binary_tree_leaves(tree->left);
	count += binary_tree_leaves(tree->right);

	/* Count leaves recursively */
	return (count);
}
