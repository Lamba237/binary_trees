#include "binary_trees.h"
/**
 * binary_tree_sibling - finds sibling
 * of a node
 * @node: pointer to node to find
 * Return: sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->right == node)
		return (node->parent->left);
	return (node->parent->right);
}
