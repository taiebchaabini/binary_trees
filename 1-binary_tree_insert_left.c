#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node at the left-child of another node.
 * @parent: pointer to the node to insert the left-child in.
 * @value: value to store in the new node.
 * Return: pointer to the created node or NULL if it fails or parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *btn;

	btn = malloc(sizeof(binary_tree_t));
	if (btn == NULL || parent == NULL)
		return (NULL);
	btn->n = value;
	btn->parent = parent;
	btn->right = NULL;
	btn->left = NULL;
	if (parent->left != NULL)
	{
		parent->left->parent = btn;
		btn->left = parent->left;
	}
	parent->left = btn;
	return (btn);
}
