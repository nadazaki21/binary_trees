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
 * nodes_at_1 - function that counts the
 * nodes with at least 1 child in a binary tree
 * @tree: the tree to operate on
 * Return: the number of nodes with one child
*/
size_t nodes_at_1(const binary_tree_t *tree)
{
	size_t nodes_number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		nodes_number += nodes_at_1(tree->left);
	}

	if (tree->right != NULL)
	{
		nodes_number +=  nodes_at_1(tree->right);
	}

	if (height(tree) == 1)
	{
		nodes_number++;
	}

	return (nodes_number);
}
/**
 * leaves -  function that counts the leaves in a binary tree
 * @tree: the root of teh tree to count the leaves of
 * Return: the number of leaves ont he ggiven tree
*/
size_t leaves(const binary_tree_t *tree)
{
	size_t leaves_number = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		leaves_number += leaves(tree->left);
	}

	if (tree->right != NULL)
	{
		leaves_number +=  leaves(tree->right);
	}

	if ((tree->left == NULL) && (tree->right == NULL))
	{
		leaves_number++;
	}

	return (leaves_number);
}
/**
 * 
 * 
*/
int complete_early_broken(const binary_tree_t *tree)
{
    int flag = 1;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
	{
		flag *= complete_early_broken(tree->left);
	}

	if (tree->right != NULL)
	{
		flag *=  complete_early_broken(tree->right);
	}

	if (height(tree) > 1  && (tree->right == NULL || tree->left == NULL))
    {
        return (0);
    }

	return (flag);
}

/**
 * binary_tree_is_complete - function that checks if a binary tree is complete
 * @tree: the root node of the tree to check if complete or not
 * Return: 1 if the tree is complete, 0 otherwise.
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
    int flag;

    if (tree == NULL)
        return (0);

    if (complete_early_broken(tree) == 0)
    {
        return (0);
    }
    
    if (leaves(tree) == (2*(nodes_at_1(tree))))
    {
        flag = 1;
    }
    else if (leaves(tree) > 0 && leaves(tree) < (2*(nodes_at_1(tree))))
    {
        flag = 0;
    }

    return (flag);

}
