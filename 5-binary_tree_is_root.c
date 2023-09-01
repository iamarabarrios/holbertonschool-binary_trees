#include "binary_trees.h"

/**
 *binary_tree_is_root - if is root
 *@node: is a pointer to the node to check
 *Return: 0 or 1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}


	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
