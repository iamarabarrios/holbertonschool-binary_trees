#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree.
 *@tree: pointer to the root node of the tree to measure the height.
 *Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
	return (0);
	}

	while (tree->right != NULL)
	{
		right_height++;
		tree = tree->right;
	}

	while (tree->left != NULL)
	{
		left_height++;
		tree = tree->left;
	}

	return (left_height > right_height ? left_height : right_height);
}

