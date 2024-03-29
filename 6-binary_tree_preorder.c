#include "binary_trees.h"

/**
 * binary_tree_preorder - Perform pre-order traversal on a binary tree.
 * @tree: A pointer to the root node of the tree.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
if (!tree || !func)
{
return;
}
func(tree->n);
binary_tree_preorder(tree->left, func);
binary_tree_preorder(tree->right, func);
}
