#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree
 * @tree: pointer to the root node of the tree
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* printf("Deleting node: %d\n", tree->n); */

	/* delete the right subtree*/
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
		tree->right = NULL; /* Set right pointer to NULL after deletion */
	}

	/* delete the left subtree */
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
		tree->left = NULL; /* Set left pointer to NULL after deletion */
	}

	/* printf("Freeing node: %d\n", tree->n); */
	free(tree);
}
