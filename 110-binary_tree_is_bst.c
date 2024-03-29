#include "binary_trees.h"

/**
 * binary_tree_is_bst - unction that checks if a binary
 * tree is a valid Binary Search Tree
 * @tree: root if the treee to be chekced
 * Return: 1 if tree is a valid BST, 0 otherwise.
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	int flag = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		flag *= binary_tree_is_bst(tree->left);

	if (tree->right != NULL)
	{
		flag *=  binary_tree_is_bst(tree->right);
	}

	if (tree->left != NULL)
	{
		if (tree->left->n > tree->n)
		{
			flag = 0;
		}
	}

	if (tree->right != NULL)
	{
		if (tree->right->n < tree->n)
		{
			flag = 0;
		}
	}

	return (flag);
}
