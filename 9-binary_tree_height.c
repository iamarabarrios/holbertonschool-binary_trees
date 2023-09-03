#include "binary_trees.h"

/**
* binary_tree_height - Fnction that measures the height of a binary tree.
* @tree: poiter to the root of the tree.
* Return: the height of the tree.
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;

	size_t height_right = 0;

	if (tree == NULL)
	{
		return (0);
	}

	while (tree->right != NULL && tree->left != NULL)
	{
		if (tree->left)
		{
			height_left++;

			tree = tree->left;
		}
		else
		{
			height_right++;

			tree = tree->right;
		}
	}
	return (height_left > height_right ? height_right : height_left);
}

