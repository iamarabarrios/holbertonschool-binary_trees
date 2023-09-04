#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves.
 * in a binary tree.
 * @tree: pointer to the root node of the tree to count
 * the number of leaves.
 * Return: num of the leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (1);
	}
	if (tree != NULL)
	{
		binary_tree_leaves(tree->right);
		leaves++;
	}

	if (tree != NULL)
	{
		binary_tree_leaves(tree->left);
		leaves++;
	}

	return (leaves);
}
