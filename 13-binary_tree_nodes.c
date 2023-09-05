#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the
 * nodes with at least 1 child in a binary tree.
 * @tree: pointer to the root node of the tree to
 * count the number of nodes.
 * Return: num of nodes with at least 1 child in a binary tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l_child = 0;
	size_t r_child = 0;

	if (tree == NULL)
	{
		return (0);
	}
	l_child = binary_tree_nodes(tree->left);
	r_child = binary_tree_nodes(tree->right);
	if (tree->right != NULL || tree->left != NULL)
	{
		return (1 + r_child + l_child);
	}
	return (r_child + l_child);
}
