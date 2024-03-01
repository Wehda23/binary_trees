#include "binary_trees.h"


/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree:  pointer to the root node of the tree to check
 * Return: 1 incase of complete otherwise 0 incase tree is null\
 * or incomplete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL  && tree->right == NULL)
		return (1);

	right  = binary_tree_is_complete(tree->right);
	left   = binary_tree_is_complete(tree->left);

	return (right && left);
}
