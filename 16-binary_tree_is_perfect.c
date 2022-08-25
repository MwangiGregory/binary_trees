#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to be checked.
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/*Size of left and right sub-trees of tree*/
	int left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	return ((left_size == right_size) ? 1 : 0);
}

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
