#include "binary_trees.h"

size_t tree_height(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: a pointer to the root node of the tree to check
 * Return: 0 if tree is NULL, otherwise return 1.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right != NULL)
			|| (tree->left != NULL && tree->right == NULL))
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));


	return (0);
}

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_depth = 0, r_depth = 0;

	if (tree == NULL)
		return (0);

	l_depth = tree_height(tree->left);
	r_depth = tree_height(tree->right);

	if (l_depth == r_depth)
		return (binary_tree_is_full(tree));

	return (0);
}
