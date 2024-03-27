#include "binary_trees.h"

/**
 * binary_tree_balance -  function that measures the balance factor of a binary tree
 * @tree: tree whose balance factor will be measured
 * Return: the balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int balance_factor;
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    if (tree->left != NULL)
    {
        left_height = binary_tree_height(tree->left);
        /* printf(" the height of the node %d is %ld \n", tree->left->n, left_height); */
        left_height++;
    }
    else
    {
        left_height = 0;
    }
    
    if (tree->right != NULL)
    {
        right_height = binary_tree_height(tree->right);
        /* printf(" the height of the node %d is %ld \n", tree->right->n ,right_height); */
        right_height++;
    }
    else
    {
        right_height = 0;
    }

    balance_factor = left_height - right_height;

    
    return (balance_factor);
}