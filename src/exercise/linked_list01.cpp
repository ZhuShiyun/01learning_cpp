/**
  ******************************************************************************
  * @file           : linked_list01.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-12-8
  ******************************************************************************
  */
#include <iostream>

/*
 * 编写一个C++程序，要求实现一个简单的链表反转函数。函数接受一个单链表的头节点作为输入，并返回反转后的链表的头节点。
 * 链表节点的定义如下：
 */
// 链表节点
struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};

// 链表反转函数
ListNode* reverseList(ListNode* head)
{
	// 初始化前驱节点为nullptr
	ListNode* pre = nullptr;
	// 初始化当前节点为头节点
	ListNode* cur = head;
	// 只要当前节点不为nullptr，遍历就得继续
	while (cur != nullptr)
	{
		// 记录next节点
		ListNode* next = cur->next;
		// 反转指针
		cur->next = pre;
		// pre往前走一步
		pre = cur;
		// cur往前走一步
		cur = next;
	}
	// 反转结束后，pre就会变成新链表的头节点
	return pre;
}


