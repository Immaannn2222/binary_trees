#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: the size , 0 if null
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
size_t s = 0;
if (tree == NULL)
return (0);
s += binary_tree_size(tree->left);
s += binary_tree_size(tree->right);
return (s + 1);
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer
 *
 * Return: yes or no
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t sl = 0, sr = 0;
if (!tree)
return (0);
if (tree->left != NULL && tree->right != NULL)
sl += binary_tree_size(tree->left);
sr += binary_tree_size(tree->right);
if (sl == sr)
return (1);
else
return (0);
}
