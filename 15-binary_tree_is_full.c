#include "binary_trees.h"



/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: Node in a binary tree
 * Return: 0 in case if node is null other wise checks
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
    int right = 0, left = 0;

    if (tree == NULL)
        return (0);

    if (tree->left && tree->right)
    {
        right = binary_tree_is_full(tree->right);
        left = binary_tree_is_full(tree->left);
        return (left && right);
    }
    else if (tree->left == NULL && tree->right == NULL)
        return (1);
    else
        return (0);
}