#include "binary_trees.h"

/**
 * bst_insert - Inserts a value in a Binary Search Tree (BST)
 * @tree: A double pointer to the root node of the BST to insert the value
 * @value: The value to insert in the BST
 * Return: A pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
    bst_t *new_node, *parent;

    if (!tree)
        return (NULL);

    if (!*tree)
    {
        new_node = binary_tree_node(NULL, value);
        if (new_node)
            *tree = new_node;
        return (new_node);
    }

    parent = NULL;
    new_node = *tree;
    while (new_node)
    {
        parent = new_node;
        if (value == new_node->n)
            return (NULL);
        if (value < new_node->n)
            new_node = new_node->left;
        else
            new_node = new_node->right;
    }

    new_node = binary_tree_node(parent, value);
    if (new_node)
    {
        if (value < parent->n)
            parent->left = new_node;
        else
            parent->right = new_node;
    }

    return (new_node);
}
