#include "binary_trees.h"


/**
 * perfect_tree - checks if a binary tree is perfect
 * @tree: Node in a binary tree
 * Return: 0 in case if node is null other wise checks
 */
int perfect_tree(const binary_tree_t *tree)
{
	int right = 0, left = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->left != NULL || tree->right == NULL)
	{
		right = 1 + perfect_tree(tree->right);
		left = 1 + perfect_tree(tree->left);
		if (right == left && right && left)
			return (left + right);
		return (0);
	}
	else
		return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Node in a binary tree
 * Return: 0 in case if node is null other wise checks
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance = perfect_tree(tree);

	if (tree == NULL)
		return (0);

	return (balance != 0 ? 1: 0);
}
