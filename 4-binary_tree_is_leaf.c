#include "binary_trees.h"

/**
 * binary_tree_delete - Deletes an entire binary tree
 *
 * @tree: Tree to delete
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL || node->left != NULL || node->right != NULL)
{
return (0);
}
else
{
return (1);
}

}
