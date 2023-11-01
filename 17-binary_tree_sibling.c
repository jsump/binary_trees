#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sinbling of a node
 * @node: node whose sibling is to be found
 * Return: pointer of sibling node
 * if node is NULL or parent is NULL, return NUL
 * if node has no sibling, return NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	else if (parent->right == node)
		return (parent->left);
	else
		return (NULL);
}
