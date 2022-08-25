#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_nodes - counts the nodes with atleast 1 child
 * in a binary tree
 *
 * @tree: Pointer to the root node of the tree to count
 * the number of nodes
 *
 * Return: Number of nodes with atleast one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_no, right_no;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_no = binary_tree_nodes(tree->left);
	right_no = binary_tree_nodes(tree->right);
	return (1 + left_no + right_no);
}
