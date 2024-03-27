#include "binary_trees.h"
/**
 * binary_tree_heighT - measures the height
 * of a binary tree
 * @tree: pointer to root node
 * Return: balance factor
 */
int binary_tree_heighT(const binary_tree_t *tree)
{
	int Left, Right;

	if (!tree)
		return (0);
	Left = binary_tree_heighT(tree->left);
	Right = binary_tree_heighT(tree->right);
	if (Left > Right)
		return (Left + 1);
	return (Right + 1);
}
/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 * @tree: pointer to root node
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int Left, Right;

	if (!tree)
		return (0);
	Left = binary_tree_heighT(tree->left);
	Right = binary_tree_heighT(tree->right);
	return (Left - Right);
}
