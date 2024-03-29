#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right
 * rotation on a binary tree
 * @tree: pointer to root node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *Node;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	Node = tree->left;
	Node->parent = tree->parent;
	tree->parent = Node;
	tree->left = Node->right;

	if (tree->left != NULL)
	{
		tree->left->parent = tree;
	}

	Node->right = tree;
	return (Node);
}
