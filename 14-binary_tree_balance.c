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
	int diference = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right)
	{
		r_height += 1 + binary_tree_balance(tree->right);
	}

	if (tree->left)
	{
		l_height += 1 + binary_tree_balance(tree->left);
	}
	diference = l_height - r_height;
	return (diference);
}
