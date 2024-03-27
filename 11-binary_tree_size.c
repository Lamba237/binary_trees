#include "binary_trees.h"
/**
 * binary_tree_size - function measures the
 * size of a tree
 * @tree: pointer to the root node of the
 * binary tree
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	if (!tree)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + 1 + right_size);
}
