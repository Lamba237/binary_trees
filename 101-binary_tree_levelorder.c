#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of
 * a binary tree
 * @tree: pointer to the root node of the tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
/**
 * print - prints out the level where you are at.
 * @tree: the input root address
 * @func: input func address
 * @Level: height of node to be printed
 */
void print(const binary_tree_t *tree, void (*func)(int), size_t Level)
{
	if (tree == NULL)
		return;

	if (Level == 1)
		func(tree->n);

	else if (Level > 1)
	{
		print(tree->left, func, Level - 1);
		print(tree->right, func, Level - 1);
	}
}
/**
 * binary_tree_levelorder - checks if a binary tree
 * is complete
 * @tree: pointer to root node of the tree
 * @func: pointer to a function to call for each node
 * Return: 0
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t Height, i = 1;

	if (tree == NULL || func == NULL)
		return;
	Height = binary_tree_height(tree) + 1;
	while (i <= Height)
	{
		print(tree, func, i);
		i++;
	}
}
