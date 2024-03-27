#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent pointer
 * @value: binary tree data
 * Return: pointer to new node or NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	node->parent = parent;
	return (node);
}
