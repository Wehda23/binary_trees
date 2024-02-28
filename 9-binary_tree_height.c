#include "binary_trees.h"


/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: Pointer to the node in binary tree
 * Return: 1 incase if another level exists otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t count = 0, count_left = 0;

    if (tree == NULL)
    {
        return (0);
    }
    
    count = tree->right? 1 + binary_tree_height(tree->right) : 0;
    count_left = tree->left? 1 + binary_tree_height(tree->left) : 0;

    return ((count > count_left)? count : count_left);
    
}