#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: Pointer to the node whose depth is to be measure
 *
 * Return: Depth of the node or zero if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
