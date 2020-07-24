#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest ancestor
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: pointer to the lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
const binary_tree_t *t, *s_t;

if (!first || !second)
return (NULL);
if (first == second)
return ((binary_tree_t *)second);
t = second;
while (t)
{
s_t = first;
while (s_t)
{
if (s_t == t)
return ((binary_tree_t *)t);
s_t = s_t->parent;
}
t = t->parent;
}
return (NULL);
}
