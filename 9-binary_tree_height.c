#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure
 * the height.
 *
 * Return: Height of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_depth, right_depth;

	if (tree == NULL)
		return (0);
	else if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_depth = binary_tree_height(tree->left);
	right_depth = binary_tree_height(tree->right);

	if (left_depth > right_depth)
		return (left_depth + 1);
	else
		return (right_depth + 1);
}
