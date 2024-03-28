#include "binary_trees.h"
/**
 * binary_tree_sizE - measures size of binary tree
 * @tree: pointer to the root node
 * Return: nothing
 */
size_t binary_tree_sizE(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_sizE(tree->left) +
			binary_tree_sizE(tree->right));
}
/**
 * Binary_tree_heighT - measures the height of a binary tree
 * @tree: the input root address
 * Return: height of the binary tree
 */
size_t Binary_tree_heighT(const binary_tree_t *tree)
{
	size_t Left, Right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	Left = Binary_tree_heighT(tree->left);
	Right = Binary_tree_heighT(tree->right);
	if (Left < Right)
		return (Right + 1);
	return (Left + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 * Return: either 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int H, size, Count = 0, Power = 1;

	H = Binary_tree_heighT(tree);
	size = binary_tree_sizE(tree);

	while (Count <= H)
	{
		Power *= 2;
		Count++;
	}
	if (Power - 1 == size)
		return (1);

	return (0);
}
