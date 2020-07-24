#include "binary_trees.h"

/**
 * binary_tree_depth -  measures the depth of a node in a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: the height
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t i;
if (tree == NULL  || tree->parent == NULL)
return (0);
while (tree->parent != NULL)
{
tree = tree->parent;
i++;
}
return (i);
}
