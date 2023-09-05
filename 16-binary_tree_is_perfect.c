#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that checks if a
 * binary tree is perfect.
 * @tree: pointer to the root node of the tree to check.
 * Return: 0 if is a imperfect tree or 1 if is perfect.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL  && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		if (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}

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

	if (tree->right)
	{
		right_height += 1 + binary_tree_height(tree->right);
	}

	if (tree->left)
	{
		left_height += 1 + binary_tree_height(tree->left);
	}

	return (left_height > right_height ? left_height : right_height);
}

