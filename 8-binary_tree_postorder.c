#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using postorder
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to the function to call for each node
 * if tree or func is null, do nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func ==  NULL)
		return;

	binary_tree_postorder(tree->left, func); /*Traverse left subtree*/

	binary_tree_postorder(tree->right, func); /*Traverse right subtree*/

	func(tree->n); /*Call function with the value*/
	}
