#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: a pointer to the lowest common ansestor node of the
 * two given nodes.
 * If no common ancestor was found, function must retun NULL
 */
binary_tree_t *binary_trees_ancestor(
		const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first->parent == second->parent)
		return ((binary_tree_t *)first->parent);

	if (first->parent == second)
		return ((binary_tree_t *) second);

	if (first == second->parent)
		return ((binary_tree_t *)first);

	return (binary_trees_ancestor(first->parent, second->parent));
}
