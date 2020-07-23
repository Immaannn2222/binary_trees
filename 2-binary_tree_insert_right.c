#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts at right
 * @parent: pointer to node
 * @value: value to store
 *
 * Return:  a pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *righty;
if (parent == NULL)
return (NULL);
righty = binary_tree_node(parent, value);
if (righty == NULL)
return (NULL);
if (parent->right)
{
parent->right->parent = righty;
righty->right = parent->right;
}
parent->right = righty;
return (righty);
}
