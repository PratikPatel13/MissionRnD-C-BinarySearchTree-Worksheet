/*

Given a Binary Search Tree ,Calculate its Inorder ,Postorder and PreOrder

Input : A BST
Output : Copy Inorder/Postorder/Preorder into the array specified .

Note : Memory for the Array is already allocated ,Dont allocate it again using malloc
->Take help of helper functions which are actually solving the problem .
->Dont Process Invalid Inputs

Bonus Task :
->Go to the BSTTransversals Spec File ,We have left a custom test case for you ,Try to fill
it and understand how testing works .
*/

#include <stdio.h>

struct node{
	struct node * left;
	int data;
	struct node *right;
};


void inorder_helper(struct node *root, int *arr, int *i){
	if (root)
	{
		inorder_helper(root->left, arr, i);
		arr[*i] = root->data;
		(*i)++;
		inorder_helper(root->right, arr, i);
	}
}

void inorder(struct node *root, int *arr)
{
	int i = 0;
	if (root && arr)
	{
		inorder_helper(root, arr, &i);
	}
}
void preorder_helper(struct node *root, int *arr, int *i){
	if (root)
	{
		arr[*i] = root->data;
		(*i)++;
		preorder_helper(root->left, arr, i);
		preorder_helper(root->right, arr, i);
	}
}

void preorder(struct node *root, int *arr)
{
	int i = 0;
	if (root && arr)
	{
		preorder_helper(root, arr, &i);
	}
}

void postorder_helper(struct node *root, int *arr, int *i){
	if (root)
	{
		postorder_helper(root->left, arr, i);
		postorder_helper(root->right, arr, i);
		arr[*i] = root->data;
		(*i)++;

	}
}

void postorder(struct node *root, int *arr)
{
	int i = 0;
	if (root && arr)
	{
		postorder_helper(root, arr, &i);
	}
}

