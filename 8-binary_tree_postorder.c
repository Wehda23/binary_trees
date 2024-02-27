#include "binary_trees.h"


/**
 * binary_tree_postorder - a function that goes through a binary tree\
 *          using pre-order traversal
 * @tree: Pointer to a tree node.
 * @func:  A pointer to the function to apply\
 *           on each element of the tree.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
        func(tree->n);
	}
}
