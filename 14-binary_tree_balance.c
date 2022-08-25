#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_balance - measures the balance factor of a
 * binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure
 * the balance factor.
 *
 * Return: Balance factor of the binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
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
	int l_height = 0, r_height = 0;

	/*
	 * Here, I assign height of empty
	 * tree to be -1, height of one node is zero
	 */
	if (tree == NULL)
		return (-1);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height > r_height)
		return (l_height + 1);
	return (r_height + 1);
}
