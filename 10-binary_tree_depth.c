#include "binary_trees.h"

/**
 * binary_tree_height - measures the depth of a node in a binary tree
 * @tree: Pointer to the node in binary tree
 * Return: the depth of the node in the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t count = 0;
    binary_tree_t  *node = tree;

    if (tree != NULL)
    {
        while (node->parent != NULL)
        {
            count++;
            node = node->parent;
        }
    }

    return (count);
}