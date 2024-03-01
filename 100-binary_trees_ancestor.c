#include "binary_trees.h"



/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first:  first node to find LCA for
 * @second: second node to find LCA for
 * Return: Pointer to the common node or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *first_parent, *second_parent;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	first_parent = first->parent;
	second_parent = second->parent;
	if (first_parent == NULL || first == second_parent ||
			(!first_parent->parent && second_parent))
	{
		return (binary_trees_ancestor(first, second_parent));
	}
	else if (second_parent == NULL || first_parent == second ||
			(!second_parent->parent && first_parent))
	{
		return (binary_trees_ancestor(first_parent, second));
	}
	return (binary_trees_ancestor(first_parent, second_parent));
}
