#include "binary_trees.h"
/**
 * binary_tree_is_bst - checks if a binary tree
 * is valid BST
 * @tree: pointer to the root node of the tree to
 * check
 * Return: returns 1 if tree is valid BST or 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_BST(tree, INT_MIN, INT_MAX));
}
/**
 * is_BST - checks if tree is BST
 * @tree: pointer to root node
 * @min: min value
 * @max: max value
 * Return: 1 for true else 0
 */
int is_BST(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);
	if (tree->n <= min || tree->n >= max)
		return (0);
	return ((is_BST(tree->left, min, tree->n)) &&
			(is_BST(tree->right, tree->n, max)));
}
