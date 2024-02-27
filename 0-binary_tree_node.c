#include "binary_trees.h"


/**
 * binary_tree_node - Function that creates and links new node to parent node
 * @parent: Pointer to the parent node to link the new node to.
 * @value: Value of the  new node.
 * Return: Pointer to the new node created.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;
    new->left = NULL;
    new->right = NULL;

	return (new);
}
