#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if a node is
 * a leaf
 * @node: pointer to the node to check
 * Return: either 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node->left == NULL && node->right == NULL);
}