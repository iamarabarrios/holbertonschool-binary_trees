#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle
 * of a node.
 * @node: pointer to the node to find the uncle.
 * Return: the node unclo ro NULL if it doesn't exist.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (!node->parent->parent)
	{
		return (NULL);
	}
	if (node->parent == node->parent->parent->right)
	{
		return (node->parent->parent->left);
	}
	else if (node->parent == node->parent->parent->left)
	{
		return (node->parent->parent->right);
	}
	return (NULL);
}
