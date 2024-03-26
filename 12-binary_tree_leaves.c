#include "binary_trees.h"

/**
 * binary_tree_leaves -  function that counts the leaves in a binary tree
 * @tree: the root of teh tree to count the leaves of
 * Return: the number of leaves ont he ggiven tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		leaves_number += binary_tree_leaves(tree->left);
	}

	if (tree->right != NULL)
	{
		leaves_number +=  binary_tree_leaves(tree->right);
	}

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		leaves_number++;
	}

	return (leaves_number);
}
