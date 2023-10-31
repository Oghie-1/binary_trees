#include "binary_trees.h"
/*
 *@node: pointer to tree
 *
 *return: null if node is empty or return sibling on success
 * */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    /* If the input node is NULL or has no parent, return NULL. */
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* Determine whether the input node is the left or right child of its parent. */
    /* Return the sibling accordingly. */
    if (node->parent->left == node)
        return (node->parent->right);
    else
        return (node->parent->left);
}
