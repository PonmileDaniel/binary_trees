#include "binary_trees.h"

/**
 * height - Calc the height of the binary tree
 * @tree: tree root
 * Return: height
 */
size_t height(const binary_tree_t *tree)
{
	size_t right = 0;
	size_t left = 0;

	if (tree == NULL)
		return (0);

	right = height(tree->right);
	left = height(tree->left);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * tree_height - calls height to return the height
 * @tree: tree root
 * Return: height of the tree or 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	return (height(tree) - 1);
}

/**
 * binary_tree_balance - call recursive balance to return the balance
 * @tree: tree root
 * Return: balance factor of the tree or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree_height(tree->left) - tree_height(tree->right));
}
