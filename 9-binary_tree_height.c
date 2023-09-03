#include "binary_trees.h"

/**
* binary_tree_height - Fnction that measures the height of a binary tree.
* @tree: poiter to the root of the tree.
* Return: the height of the tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->right != NULL)
	{
		tree = tree->right;
		height++;
	}
	if (tree->left != NULL)
	{
		while (tree->left != NULL)
		{
			tree = tree->left;
			height++;
		}
	}
	return (height);
}
