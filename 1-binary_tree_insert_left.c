#include "binary_trees.h"


/**
 * binary_tree_insert_left - Function that creates and links new node to\
 *          left side of the parent node
 * @parent: Pointer to the parent node to link the new node to.
 * @value: Value of the  new node.
 * Return: Pointer to the new node created.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
        return (NULL);

    new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
    {
        new_node->left = parent->left;
        new_node->left->parent = new_node;
    }

	parent->left = new_node;
	return (new_node);
}
