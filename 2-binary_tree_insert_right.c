#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store on the new node
 * Return: pointer to tje created node, or NULL on failure or if parent is NULL
 * If parent already had a right-child, new node must take its place,
 * the old right-child must be set as the right-child of new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;
	return new_node;
}
