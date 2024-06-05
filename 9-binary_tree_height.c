#include "binary_trees.h"

/**
 * height - measure the height of the binary tree
 * @tree: tree root
 * Return: Height
 */
size_t height(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_height - calls height to return the height
 * @tree: tree root
 * Return: height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree) - 1);
}
