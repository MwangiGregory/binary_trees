#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - insert a node as the right child
 * of another child.
 * If the parent already has a right child, the new node takes
 * its place, and the old left-child is set as the left-child
 * of the new node
 *
 * @parent: Pointer to the parent node
 * @value: Integer to be stored in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;

	new = malloc(1 * sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	if (parent == NULL)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->parent = parent;
		new->right = parent->right;
		if (parent->right != NULL)
			parent->right->parent = new;
		parent->right = new;
	}
	return (new);
}
