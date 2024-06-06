#include "binary_trees.h"

/**
 * tree_is_leaf - checks if a node is a leadf
 * @nde: pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int tree_is_leaf(const binary_tree_t *nde)
{
	int leaf = 0;

	if (nde && !(nde->left) && !(nde->right))
		leaf = 1;

	return (leaf);
}

/**
 * tree_parent - check if a node is a parent
 * @nde: pointer to the node
 * Return: 1 if node is a parent, otherwise 0
 */
int tree_parent(const binary_tree_t *nde)
{
	int parent = 0;

	if (nde && nde->left && nde->right)
		parent = 1;

	return (parent);
}

/**
 * height - measures the height
 * @tree: tree root
 * Return: height
 */
int height(const binary_tree_t *tree)
{
	int right = 0;
	int left = 0;

	if (tree == NULL)
		return (-1);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree root
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree && height(tree->left) == height(tree->right))
	{
		if (height(tree->left) == -1)
			return (1);

		if (tree_is_leaf(tree->left) && tree_is_leaf(tree->right))
			return (1);

		if (tree_parent(tree))
			return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
	}

	return (0);
}
