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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: the tree to check if perfect or not
 * Return: 1 if tree is perfect, 00 if tree is not
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int flag = 1;

	if (tree == NULL)
		return (0);

	if (height(tree->left) != height(tree->right))
		return (0);

	if ((tree->left == NULL && tree->right == NULL) ||
	 (tree->left != NULL && tree->right != NULL))
	{

	}
	else
		return (0);

	if (tree->left != NULL)
		flag *= binary_tree_is_perfect(tree->left);

	if (tree->right != NULL)
		flag *= binary_tree_is_perfect(tree->right);

	return (flag);
}
