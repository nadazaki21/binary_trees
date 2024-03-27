#include "binary_trees.h"

/**
 * height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Description: If tree is NULL, the height is 0
 * Return: Height of the binary tree
 */
size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t left_height = height(tree->left);
		size_t right_height = height(tree->right);

		if (left_height > right_height)
			return (left_height + 1);
		else if (tree->left == NULL && tree->right == NULL)
			return (0);
		else
			return (right_height + 1);
	}
}

/**
 * binary_tree_balance -  function that measures the
 * balance factor of a binary tree
 * @tree: tree whose balance factor will be measured
 * Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_factor;
	size_t left_height = 0, right_height = 0;

	if (tree->left != NULL)
	{
		left_height = height(tree->left);
		left_height++;
	}
	else
	{
		left_height = 0;
	}

	if (tree->right != NULL)
	{
		right_height = height(tree->right);

		right_height++;
	}
	else
	{
		right_height = 0;
	}

	balance_factor = left_height - right_height;

	return (balance_factor);
}
