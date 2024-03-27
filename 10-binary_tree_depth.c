#include "binary_trees.h"
/**
 * binary_tree_depth - function measures depth
 * of a node in a binary tree
 * @tree: pointer to the node to measure
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
