#include "binary_trees.h"

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    /* Recurse on the left subtree*/
    binary_tree_postorder(tree->left, func);
    /* recurse on the right subtree*/
    binary_tree_postorder(tree->right, func);
    /* Call the function on the current node*/
    func(tree->n);
}
