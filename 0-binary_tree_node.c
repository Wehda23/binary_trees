#include "binary_trees.h"


/**
 * binary_tree_node - Function that creates and links new node to parent node
 * @parent: Pointer to the parent node to link the new node to.
 * @value: Value of the  new node.
 * Return: Pointer to the new node created.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = malloc(sizeof(binary_tree_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = value;
	new->parent = parent;

	return (new);
}
