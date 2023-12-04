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

// ******************************前序遍历*********************************
void preOrder(Node root)
{
	if (root == NULL) return;
	cout << root->element;
	preOrder(root->left);
	preOrder(root->right);
}

// 用非递归的方式写前序遍历
// ********************栈的实现********************
typedef Node T; // 这里是定义了一个指向TreeNode的指针别名T

struct StackNode {
	T element;
	StackNode * next;
};

typedef struct StackNode * SNode; // 这里命名SNode避免冲突

void initStack(SNode head){
	head->next = NULL;
}

bool pushStack(SNode head, T element){
	SNode newNode = (SNode)malloc(sizeof(struct StackNode));
	if(newNode == NULL) return false;
	newNode->element = element;
	newNode->next = head->next;
	head->next = newNode;
	return true;
}

bool isEmpty(SNode head){
	return head->next == NULL;
}

T popStack(SNode head){
	if(isEmpty(head)) return NULL;
	SNode topNode = head->next;
	T topElement = topNode->element;
	head->next = topNode->next;
	free(topNode);
	return topElement;
}

//***********************END***************************

void preOrder2(Node root)
{
	struct StackNode stack;
	initStack(&stack); //栈先搞出来
	while (root || !isEmpty(&stack)) {  //两个条件，只有当栈空并且节点为NULL时才终止循环
		while (root){ // 先不断遍历左子树，直到没有为止
			cout << root->element; //然后打印当前结点元素值
			pushStack(&stack, root); //途中每经过一个结点，就将结点丢进栈中
			root = root->left; //继续遍历下一个左孩子结点
		}
		root = popStack(&stack); //经过前面的循环，明确左子树全部走完了，接着就是右子树了
		root = root->right; //得到右孩子，如果有右孩子，下一轮会重复上面的步骤；如果没有右孩子那么这里的root就被赋值为NULL了，下一轮开始会直接跳过上面的while，继续出栈下一个结点再找右子树
	}
}

// 中序遍历
void inOrder(Node root)
{
	if (root == NULL) return;
	inOrder(root->left);
	cout << root->element;
	inOrder(root->right);
}

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
//	cout << "获取A的左孩子的左孩子: " << a->left->left->element << endl;

	// 前序遍历
	preOrder(a);
	cout << endl;
	preOrder2(a);
	cout << endl;

	// 中序遍历
	inOrder(a);
	cout << endl;

	return 0;
}