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
	int l_height = 0, r_height = 0;

	if (tree == NULL)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return ((l_height == r_height) ? 1 : 0);
}

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
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
