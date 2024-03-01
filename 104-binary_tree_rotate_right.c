#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: node at the binary tree
 * Return: pointer of a node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL || tree->left == NULL)
	{
		return (NULL);
	}
	temp = tree->left;
	tree->left = temp->right;
	if (temp->right != NULL)
	{
		temp->right->parent = tree;
	}
	temp->right = tree;
	temp->parent = tree->parent;
	tree->parent = temp;
	return (temp);
}
