#include "binary_trees.h"


/**
 * perfect_tree - checks if a binary tree is perfect
 * @tree: Node in a binary tree
 * Return: 0 in case if node is null other wise checks
 */
int perfect_tree(const binary_tree_t *tree)
{
	

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

    return (balance == 0? 1 : 0);
}