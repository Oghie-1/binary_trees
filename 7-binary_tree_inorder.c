#include "binary_trees.h"

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;

    /* recurse on the left subtree*/
    binary_tree_inorder(tree->left, func);
    /* Call the function on the current node*/
    func(tree->n);
    /* recurse on the right subtree*/
    binary_tree_inorder(tree->right, func);
}
