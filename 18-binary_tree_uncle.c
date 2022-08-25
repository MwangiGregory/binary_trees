#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: Pointer to the node whose uncle is to be found.
 *
 * Return: Pointer to the uncle node, NULL otherwise
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - finds the sibling of a node
 *
 * @node: Pointer to the node whose sibling is to
 * be found.
 *
 * Return: A pointer to the sibling, NULL otherwise.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
