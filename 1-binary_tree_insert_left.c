#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node at left
 * @parent: parent of the left node
 * @value: its value
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *lefty;
if (parent == NULL)
return (NULL);
lefty = binary_tree_node(parent, value);
if (lefty == NULL)
return (NULL);
if (parent->left)
{
parent->left->parent = lefty;
lefty->left = parent->left;
}
parent->left = lefty;
return (lefty);
}
