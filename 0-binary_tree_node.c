#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: a pointer to the parent node of the node created
 * @value: value hold by the node
 *
 * Return: pointer to the new node NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *root;
root = malloc(sizeof(binary_tree_t));
if (root == NULL)
return (NULL);
root->parent = parent;
root->n = value;
root->left = NULL;
root->right = NULL;
return (root);
}
