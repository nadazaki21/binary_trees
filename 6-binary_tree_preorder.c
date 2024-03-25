#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing.
 * Performs pre-order traversal: node, left, right.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree != NULL && func != NULL)
    {
        (*func)(tree->n);
        binary_tree_preorder(tree->left, func);
        binary_tree_preorder(tree->right, func);
    }
}
