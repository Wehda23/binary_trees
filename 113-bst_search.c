#include "binary_trees.h"
/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree:  is a pointer to the root node of the BST to search
 * @value:  is the value to search in the tree
 * Return: Returns NuLL in case entity not found.
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *search;

	if (tree == NULL)
		return (NULL);
	if (value < tree->n)
	{
		search = bst_search(tree->left, value);
	}
	else if (value > tree->n)
	{
		search = bst_search(tree->right, value);
	}
	else if (value == tree->n)
		return ((bst_t *)tree);
	else
		return (NULL);
	return (search);
}
