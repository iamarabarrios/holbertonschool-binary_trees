#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves.
 * in a binary tree.
 * @tree: pointer to the root node of the tree to count
 * the number of leaves
 * Return: num of the leaves.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_leaves = 0;
	size_t left_leaves = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
    {
        return (1);
    }
	if (tree != NULL)
	{
		right_leaves = binary_tree_leaves(tree->right);
		left_leaves = binary_tree_leaves(tree->left);
	}
	return (right_leaves + left_leaves);
}
