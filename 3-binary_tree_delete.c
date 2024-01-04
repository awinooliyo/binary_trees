#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete.
 * Return: void.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* deleting both subtrees*/
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);

	/* deleting the tree */
	free(tree);
}
