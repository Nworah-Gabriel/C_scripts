#include "binary.h"

struct node *create_node(struct node *root, int data)
{
	struct node *new_node;
	new_node = malloc(sizeof(struct node));
	root = new_node;
	new_node->data = data;
	new_node->left = '\0';
	new_node->right = '\0';
	
	if (new_node == NULL)
	{
		printf("failed");
		return (NULL);
	}
	else
		printf("created node with data: %d\n", root->data);
		return (new_node);
}

struct node *insert_node_left(struct node *parent, int data)
{
	struct node *new;
	new = malloc(sizeof(struct node));

	if (!new)
		return (NULL);
	parent->left = new;
	new->parent = parent;
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	if (new)
		printf("node with %d exist\n", new->data);
	else
                printf("error");

	return (new);
}

struct node *insert_node_right(struct node *parent, int data)
{
        struct node *new;
	new = malloc(sizeof(struct node));

        if (!new)
                return (NULL);
	parent->right = new;
        new->parent = parent;
        new->data = data;
        new->left = NULL;
        new->right = NULL;
	if (new)
                printf("node with %d exist\n", new->data);
	else
		printf("error");
        return (new);
}

struct node *max_heap(struct node *root)
{
	int holder;
	struct node *root_parent;

	if(!root)
		return (0);

	max_heap(root->right);
        max_heap(root->left);

	if (root->parent)
	{
		if((root->parent->data) < (root->data))
		{
			holder = root->data;
			printf("substituting %d with %d\n", holder, root->parent->data);
			root->data = root->parent->data;
			root->parent->data = holder;
		}
		if (root->left)
		{
			if((root->left->data) > (root->data))
                	{
                        	holder = root->data;
                        	printf("substituting %d with %d\n", holder, root->left->data);
                        	root->data = root->left->data;
                       		root->left->data = holder;
                	}
		}
		if (root->right)
		{
			if((root->right->data) > (root->data))
                	{
                        	holder = root->data;
                        	root->data = root->right->data;
                        	root->right->data = holder;
                	}
		}
	}
	if (check_max_sort(root->left) == false)
                max_heap(root->left);
        if (check_max_sort(root->right) == false)
                max_heap(root->right);

	return (root);
}


struct node *min_heap(struct node *root)
{
        int holder;
        struct node *root_parent;

        if(!root)
                return (0);

        min_heap(root->right);
        min_heap(root->left);

        if (root->parent)
        {
                if((root->parent->data) > (root->data))
                {
                        holder = root->data;
                        printf("substituting %d with %d\n", holder, root->parent->data);
                        root->data = root->parent->data;
                        root->parent->data = holder;
                }
                if (root->left)
                {
                        if((root->left->data) < (root->data))
                        {
                                holder = root->data;
                                printf("substituting %d with %d\n", holder, root->left->data);
                                root->data = root->left->data;
                                root->left->data = holder;
                        }
                }

		if (root->right)
                {
                        if((root->right->data) < (root->data))
                        {
                                holder = root->data;
                                root->data = root->right->data;
                                root->right->data = holder;
                        }
                }
        }
	if (check_min_sort(root->left) == false)
		min_heap(root->left);
	if (check_min_sort(root->right) == false)
		min_heap(root->right);
        return (root);
}

int check_min_sort(struct node *root)
{
	if (!root)
	{
		return (0);
	}
	check_min_sort(root->left);
	check_min_sort(root->right);
	if (root->parent)
	{
		if((root->parent->data) < (root->data))
		{
			return (false);
		}
	}
	return (true);
}

int check_max_sort(struct node *root)
{
        if (!root)
        {
                return (0);
        }
        check_max_sort(root->left);
        check_max_sort(root->right);
        if (root->parent)
        {
                if((root->parent->data) > (root->data))
                {
                        return (false);
                }
        }
        return (true);
}

