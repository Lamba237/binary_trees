#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of
 * a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_child;
	size_t right_child;

	if (tree == NULL)
		return (0);

	left_child = binary_tree_height(tree->left);
	right_child = binary_tree_height(tree->right);

	return 1 + (left_child > right_child ? left_child : right_child);
}
