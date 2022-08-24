#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert a node as the left child
 * of another node.
 * If parent already has a left child, the new node takes
 * its place, and the old left-child is set as the left-child
 * of the new node.
 *
 * @parent: Pointer to the parent node
 * @value: Integer to be stored in the new node
 *
 * Return: Pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(1 * sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->right = NULL;
	if (parent == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->parent = parent;
		new->left = parent->left;
		if (parent->left != NULL)
			parent->left->parent = new;
		parent->left = new;
	}
	return (new);
}
