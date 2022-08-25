#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree whose
 * size is to be measured
 *
 * Return: The size of the tree or 0 if the tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes, right_nodes;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_nodes = binary_tree_size(tree->left);
	right_nodes = binary_tree_size(tree->right);
	return (left_nodes + right_nodes + 1);
}
