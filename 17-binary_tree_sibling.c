#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if full tree
 * @tree: pointer
 *
 * Return: int
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
if (tree->left && tree->right)
return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
return (0);
}


/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer
 *
 * Return: yes or no
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (!node || node->parent)
return (NULL);
if (binary_tree_is_full(node->parent) == 1)
{
if ((node->parent->left))
return (node->parent->right);
else
{
return (node->parent->left);
}
}
return (NULL);
}
