#include "binary_trees.h"

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree == NULL || func == NULL)
        return;
	/* Call the function on the current node */
    func(tree->n);
    /*recurse on the left subtree*/
    binary_tree_preorder(tree->left, func);
    /*recurse on the right subtree */
    binary_tree_preorder(tree->right, func);
}
