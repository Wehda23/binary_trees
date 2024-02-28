#include "binary_trees.h"


/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: Node in the binary tree.
 * Return: The balance factor of the node passed as parameter
 */
int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (0);
    
    left_height = binary_tree_height(tree->right);
    right_height = binary_tree_height(tree->left);

    return (left_height - right_height);
}