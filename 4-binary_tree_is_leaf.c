#include "binary_trees.h"

/**
 * binary_tree_delte - Delete an entire binary tree
 * @tree: tree root
 * Return: no return
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
