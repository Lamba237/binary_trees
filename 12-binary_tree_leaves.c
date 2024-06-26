#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a
 * binary tree
 * @tree: pointer to the root node of the binary tree
 * Return: number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t Right, Left;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	Left = binary_tree_leaves(tree->left);
	Right = binary_tree_leaves(tree->right);
	return (Left + Right);
}
