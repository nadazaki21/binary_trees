#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: tree to be operated on
 * Return: 1 if full 0 if not
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL && tree->left != NULL)
	{
		flag = binary_tree_is_full(tree->left);
		flag = binary_tree_is_full(tree->right);
	}
	else if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	else if (tree->right == NULL || tree->left == NULL)
	{
		return (0);
	}

	return (flag);

}
