#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the
 * nodes with at least 1 child in a binary tree
 * @tree: the tree to operate on
 * Return: the number of nodes with one child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		nodes_number += binary_tree_nodes(tree->left);
	}

	if (tree->right != NULL)
	{
		nodes_number +=  binary_tree_nodes(tree->right);
	}

	if ((tree->left != NULL) || (tree->right != NULL))
	{
		nodes_number++;
	}

	return (nodes_number);
}
