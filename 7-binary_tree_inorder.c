#include "binary_trees.h"

/**
 *binary_tree_inorder - goes through a binary tree using in-order traversal.
 *@tree: is a pointer to the root node of the tree to traverse.
 *@func:  is a pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

/**Instead of seeing the current node first, what it does is*/
/**see the one on the left, then the current one*/
/**and finally the one on the right*/
}
