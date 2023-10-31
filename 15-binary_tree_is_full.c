#include "binary_trees.h"
/**
 *@tree - is a pointer to the root node of the tree to check
 *return - 0 if null or 1 if full
 *
 */


int binary_tree_is_full(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* If the current node has no children (leaf node), it is full. */
    if (tree->left == NULL && tree->right == NULL)
        return (1);

    /* If the current node has exactly 2 children, check its left and right subtrees. */
    if (tree->left != NULL && tree->right != NULL)
        return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

    /* If the current node has only one child, it is not a full tree.*/
    return (0);
}
