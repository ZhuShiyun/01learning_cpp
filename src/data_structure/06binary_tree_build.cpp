/**
  ******************************************************************************
  * @file           : 06binary_tree_build.cpp
  * @author         : b-zhushiyun
  * @brief          : 二叉树的构建
  * @attention      : None
  * @date           : 23-12-1
  ******************************************************************************
  */
#include <iostream>

using namespace std;

typedef char E;

typedef struct TreeNode{ // 二叉树节点
	E element;
	TreeNode * left;
	TreeNode * right;
} * Node; // 这里是定义了一个指向TreeNode的指针别名Node

int main()
{
	Node a = new TreeNode;
	Node b = new TreeNode;
	Node c = new TreeNode;
	Node d = new TreeNode;
	Node e = new TreeNode;
	a->element = 'A';
	b->element = 'B';
	c->element = 'C';
	d->element = 'D';
	e->element = 'E';

	// 构建二叉树
	/*
	 * 长这样：
	 *                 A
	 *                / \
	 *               B   C
	 *              / \
	 *             D   E
	 * 希望没歪！！
	 */
	a->left = b;
	a->right = c;
	b->left = d;
	b->right = e;

	// *******************************************
	// 叶子节点指向空
	// *******************************************
	c->left = c->right = NULL;
	d->left = d->right = NULL;
	e->left = e->right = NULL;

	// 获取A的左孩子的左孩子
	cout << a->left->left->element << endl;
	// 获取A的右孩子的右孩子
	cout << a->right->right->element << endl;

	return 0;
}