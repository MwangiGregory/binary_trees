#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes an entire binary tree
 *
 * @tree: Pointer of the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *current = NULL;
	binary_tree_t *parent = NULL;

	if (tree == NULL)
		return;

	current = tree;
	while (current != NULL)
	{
		/*check for a leaf node*/
		if (current->left == NULL && current->right == NULL)
		{
			parent = current->parent;
			if (parent != NULL)
			{
				/*
				 * reset left-child or right-child
				 * pointers for parent node to NULL
				 */
				if (parent->left == current)
					parent->left = NULL;
				else if (parent->right == current)
					parent->right = NULL;
			}
				free(current);
				current = parent;
		}
		else if (current->left != NULL)
			current = current->left;
		else if (current->right != NULL)
			current = current->right;
	}
}
