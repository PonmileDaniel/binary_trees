#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new;

	node_new = malloc(sizeof(binary_tree_t));

	if (node_new == NULL)
		return (NULL);

	node_new->n = value;
	node_new->parent = parent;
	node_new->left = NULL;
	node_new->right = NULL;

	return (node_new);
}
