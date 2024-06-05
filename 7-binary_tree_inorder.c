#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through a binary using in-order
 * @tree: pointer to the root node
 * @func: func to call for each node
 * Return: no return
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
