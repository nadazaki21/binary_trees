#include "binary_trees.h"


/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 * @parent: the parent of the node to be inserted
 * @value: the value of the node to be inserted
 * Return: the address of the node to be inserted
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_to_be_inserted, *right_node;

	if (parent == NULL)
		return (NULL);

	node_to_be_inserted = binary_tree_node(parent, value); /* new node created */

	if (parent->right != NULL)
	{
		/* every node whose right and left are empty has them as NULL*/
		right_node = parent->right;
		parent->right = node_to_be_inserted;

		right_node->parent = node_to_be_inserted;
		node_to_be_inserted->right = right_node;
	}
	else
	{
		parent->right = node_to_be_inserted;
	}
	return (node_to_be_inserted);
}
