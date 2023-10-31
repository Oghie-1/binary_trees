#include "binary_trees.h"
#include <stdlib.h>


/**
 * binary_tree_is_complete - Checks if a binary tree is complete.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is complete, 0 otherwise.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    /* Initialize a flag to check if non-full nodes are encountered */
    int seen_non_full = 0;

    binary_tree_t *queue[1000];  /* Max size of the queue (adjust as needed) */
    int front = 0, rear = 0;

    queue[rear++] = (binary_tree_t *)tree;

    while (front < rear)
    {
        binary_tree_t *current = queue[front++];

        /* If a non-full node is seen after full nodes, it's not complete */
        if (current == NULL)
        {
            seen_non_full = 1;
        }
        else
        {
            /* If we have seen a non-full node already, it's not complete */
            if (seen_non_full)
                return (0);

            /* Enqueue left and right children */
            queue[rear++] = current->left;
            queue[rear++] = current->right;
        }
    }

    /* If we reached here, the tree is complete */
    return (1);
}
