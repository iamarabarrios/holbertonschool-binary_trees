#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures the
 * balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to
 * measure the balance factor.
 * Return: diference of height of the sub trees.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0;
	int r_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	return (l_height - r_height);
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
		right_height += 1 + binary_tree_height(tree->right);
		left_height += 1 + binary_tree_height(tree->left);

	return (left_height > right_height ? left_height : right_height);
}

