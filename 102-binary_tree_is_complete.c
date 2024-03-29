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
/**
 * check_complete - check if complete
 * @tree: pointer to root node
 * @Index: index of node
 * @Size: tree size
 * Return: 1 or 0
 */
int check_complete(const binary_tree_t *tree, size_t Index, size_t Size)
{
	if (tree == NULL)
		return (1);
	if (Index >= Size)
		return (0);

	return (check_complete(tree->left, Index * 2 + 1, Size) &&
		check_complete(tree->right, Index * 2 + 2, Size));
}
/**
 * binary_tree_is_complete - checks if binary tree is complete
 * @tree: pointer to the root node of the tree
 * Return: 0 for failure
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t Index, Size;

	if (tree == NULL)
		return (0);
	Index = 0;
	Size = binary_tree_size(tree);
	return (check_complete(tree, Index, Size));
}
