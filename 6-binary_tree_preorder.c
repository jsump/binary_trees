#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree,
 * using pre-order traversal.
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to a function to call each node.
 * the value in node must be passed as a parameter to this function.
 * If tree or func is NULL, do nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}