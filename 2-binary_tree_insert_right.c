#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: binary_tree_insert_right
 *@value: int
 *Return: new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (parent != NULL)
	{

	new_node = binary_tree_node(parent, value);

		if (new_node != NULL)
		{
			if (parent->right != NULL)
			{
				parent->right->parent = new_node;
				new_node->right = parent->right;
			}
			parent->right = new_node;
		}
	}
return (new_node);
}
