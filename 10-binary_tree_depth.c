#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 *
 * Description: If tree is NULL, the depth is 0
 * Return: Depth of the node, 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

<<<<<<< HEAD
    if (tree == NULL)
    {
        return(0);
    }
=======
	if (tree == NULL)
	{
		return (0);
	}
>>>>>>> 395b8f0f56f50009ea09a93e4afaf146e5d2a919

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		counter++;
	}

	return (counter);
}
