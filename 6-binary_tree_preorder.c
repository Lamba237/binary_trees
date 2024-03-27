#include "binary_trees.h"
/**
 * binary_tree_preorderbinary_tree_preorder - a
 * function that goes through a binary tree using
 * preorder traversal
 * @tree: pointer to root node
 * @func: pointer to function call
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	/*binary_tree_print(tree->parent);*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
