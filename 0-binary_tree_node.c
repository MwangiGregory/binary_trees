#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - creates a binary tree node
 * 
 * @parent: Pointer to the parent node
 * @value: Integer to be stored in the created node
 *
 * Return: Pointer to a new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new = NULL;
	new = malloc(1 * sizeof(binary_tree_t));
	if (new == NULL)
		return NULL;

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent == NULL)
	{
		new->parent = NULL;
		parent = new;
	}
	else
	{
		new->parent = parent;
		if (parent->left == NULL)
			parent->left = new;
		else if (parent->right == NULL)
			parent->right = NULL;
		else
		{
			free(new);
			return NULL;
		}
	}
	return new;
}
