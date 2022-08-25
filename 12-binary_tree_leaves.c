#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree: Pointer to the root node of the tree whose
 * number of leaves is to be counted.
 *
 * Return: Number of leaves or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	return (left_leaves + right_leaves);
}
