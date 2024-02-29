#include "binary_trees.h"

/**
 * binary_tree_height_dd - function that measures the height of a binary tree
 * @tree: Pointer to the node in binary tree
 * Return: 1 incase if another level exists otherwise 0
 */
size_t binary_tree_height_dd(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_dd(tree->left);
	right_height = binary_tree_height_dd(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance_d - measures the balance factor of a binary tree
 * @tree: Node in the binary tree.
 * Return: The balance factor of the node passed as parameter
 */
int binary_tree_balance_d(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height_dd(tree->left);
	right_height = binary_tree_height_dd(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Node in a binary tree
 * Return: 0 in case if node is null other wise checks
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balance = binary_tree_balance_d(tree);

	if (tree == NULL)
		return (0);

	return (balance == 0 ? 1 : 0);
}
