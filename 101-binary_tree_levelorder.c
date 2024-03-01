#include "binary_trees.h"


/**
 * binary_tree_levelorder - goes through a binary tree using level-order traversal
 * @tree: Pointer to a node in binary tree
 * @func: function to apply on each node of the tree
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree != NULL && func != NULL)
    {
        if (tree->parent == NULL)
            func(tree->n);
        if (tree->left)
            func(tree->left->n);
        if (tree->right)
            func(tree->right->n);
        binary_tree_levelorder(tree->left, func);
        binary_tree_levelorder(tree->right, func);
    }
}