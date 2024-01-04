#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes.
 * If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t
		*first, const binary_tree_t *second)
{
	const binary_tree_t *ancestor, *temp;

	if (first == NULL || second == NULL)
		return (NULL);

	ancestor = first;

	while (ancestor)
	{
		temp = second;

		while (temp)
		{
			if (ancestor == temp)
				return ((binary_tree_t *)temp);
			temp = temp->parent;
		}

		ancestor = ancestor->parent;
	}

	return (NULL);

}
