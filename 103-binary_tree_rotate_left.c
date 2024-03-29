#include "binary_trees.h"
/**
 * binary_tree_rotate_left- performs a left rotation
 * on a binary tree
 * @tree: pointer to root node
 * Return: a pointer to new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *Node;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	Node = tree->right;
	Node->parent = tree->parent;
	tree->parent = Node;
	tree->right = Node->left;

	if (tree->right != NULL)
	{
		tree->right->parent = tree;
	}

	Node->left = tree;
	return (Node);
}
