#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root
 *
 * Return: 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t max_left, max_right;
if (!tree || (!tree->left && !tree->right))
return (0);
max_left = binary_tree_height(tree->left);
max_right = binary_tree_height(tree->right);
if (max_right > max_left)
return (max_right + 1);
else
{
return (max_left + 1);
}
}

/**
 * binary_tree_balance- finds balance factor
 * @tree: pointer
 *
 * Return: difference
 */

int binary_tree_balance(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return ((binary_tree_height(tree->left) - 1) -
(binary_tree_height(tree->right) - 1));
}
