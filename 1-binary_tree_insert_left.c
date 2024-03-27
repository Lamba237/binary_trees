#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the
 * left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 *
 * Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	parent->left = binary_tree_node(parent, value);

	return (parent->left);
}
