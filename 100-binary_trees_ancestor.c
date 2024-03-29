#include "binary_trees.h"
/**
 * binary_tree_depth - function measures depth
 * of a node in a binary tree
 * @tree: pointer to the node to measure
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
/**
 * binary_trees_ancestor - A function that finds the
 * lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: lowest common ancestor of two nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	size_t First, Second;
	binary_tree_t *F_hold, *S_hold;

	F_hold = (binary_tree_t *)first;
	S_hold = (binary_tree_t *)second;

	if (F_hold == NULL || S_hold == NULL)
		return (NULL);
	First = binary_tree_depth(F_hold);
	Second = binary_tree_depth(S_hold);
	while (First > Second)
	{
		F_hold = F_hold->parent;
		First--;
	}
	while (First < Second)
	{
		S_hold = S_hold->parent;
		Second--;
	}
	while (F_hold != S_hold)
	{
		F_hold = F_hold->parent;
		S_hold = S_hold->parent;
	}
	return (F_hold);
}
