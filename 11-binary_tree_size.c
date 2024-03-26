#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: the tree whose size will be measured
 * Return: the size of the tree that starts with the node
 * given as a parameter in the fucntion
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		/**
		 *  printf("at node %d counted size now %ld proceedng to node %d\n",
		 *  tree->n, size , tree->left->n);
		*/
		size += binary_tree_size(tree->left);
	}

	if (tree->right != NULL)
	{
		/**
		 *  printf("at node %d counted size now %ld proceedng to node %d\n",
		 *  tree->n, size , tree->right->n);
		*/
		size += binary_tree_size(tree->right);
	}

	return (size);
}
