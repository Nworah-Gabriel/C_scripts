#ifndef BINARY_H
#define BINARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdbool.h>
struct node
{
	int data;
	struct node *parent;
	struct node *left;
	struct node *right;
};

struct node *create_node(struct node *root, int data);
void binary_tree_print(const struct node *root);
static size_t _height(const struct node *tree);
static int print_t(const struct node *tree, int offset, int depth, char **s);
struct node *insert_node_right(struct node *parent, int data);
struct node *insert_node_left(struct node *parent, int data);
struct node *max_heap(struct node *root);
struct node *min_heap(struct node *root);
int check_min_sort(struct node *root);
int check_max_sort(struct node *root);

#endif /*BINARY_H*/
