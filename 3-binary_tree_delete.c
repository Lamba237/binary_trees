#include "binary_trees.h"
/**
 * binary_tree_delete - A function that
 * deletes an entire binary tree
 * @tree: pointer to the root node of the tree
 * to delete
 * Return: NULL on failure
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left)
	{
		binary_tree_delete(tree->left);
		free(tree->left);
	}
	if (tree->right)
	{
		binary_tree_delete(tree->right);
		free(tree->right);
	}
	free(tree);
}
