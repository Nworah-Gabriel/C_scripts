#include "binary.h"
#include <stdio.h>

int main(void)
{
	struct node *root1;
        struct node *root1_left;
       	struct node *root1_right;
	struct node *root1_grand_left;
       	struct node *root1_grand_right;
	struct node *root1_right_right;
	struct node *root1_right_left;
	struct node *new;
	struct node *root2;
	struct node *root3;
	struct node *root6;
	struct node *root5;
	struct node *root4;
	struct node *root7;
	struct node *root8;
	struct node *root9;
	struct node *root10;
	struct node *root11;
	struct node *root12;
	struct node *root13;
	struct node *root14;
	struct node *root15;




	/*root = create_node(root, 2);
	print_node(root);*/

	root1 = create_node(root1, 98);
        root1_left = insert_node_left(root1, 12);
	root1_right = insert_node_right(root1, 6);
	root1_right_right = insert_node_right(root1_right, 16);
	root1_right_left = insert_node_left(root1_left, 402);
	root1_grand_left = insert_node_left(root1_right_left, 256);
	root1_grand_right = insert_node_right(root1_right_right, 512);
	root2 = insert_node_right(root1_grand_right, 1000);
	root3 = insert_node_left(root1_grand_right, 2000);
	root4 = insert_node_left(root3, 5000);
	root5 = insert_node_right(root3, 500);
	root7 = insert_node_right(root4, 1);
	root8 = insert_node_left(root4, 8);
	root9 = insert_node_right(root5, 4);
	root10 = insert_node_left(root4, 10);
	root11 = insert_node_right(root1_grand_right, 15);
	root12 = insert_node_right(root11, 31);
	root13 = insert_node_left(root11, 106);
	root14 = insert_node_right(root13, 22);
	root15 = insert_node_left(root1_right_right, 13);

	binary_tree_print(root1);
	printf("\n\nsorted max heap tree\n");
	max_heap(root1);
	binary_tree_print(root1);
	printf("\n\nsorted min heap\n");
	min_heap(root1);
        binary_tree_print(root1);

	/*root4 = max_heap(root1);
        binary_tree_print(root4);

	root5 = max_heap(root4);
        binary_tree_print(root5);

	root6 = max_heap(root5);
        binary_tree_print(root6);*/

	return (0);
}
