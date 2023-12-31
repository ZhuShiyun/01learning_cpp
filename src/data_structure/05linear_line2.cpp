/**
  ******************************************************************************
  * @file           : linear_line.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : 不知道为什么只能打印到17，后面的就不打印了
  * @date           : 23-11-30
  ******************************************************************************
  */

#include <stdio.h>
#include <iostream>
#include <malloc.h>

typedef int E;

struct List {
	E * array;
	int capacity;
	int size;
};

typedef struct List * ArrayList;

bool initList(ArrayList list){
	list->array =(E *) malloc(sizeof(E) * list->capacity);
	if(list->array == NULL) return 0;
	list->capacity = 10;
	list->size = 0;
	return 1;
}

bool insertList(ArrayList list, E element, int index){
	if(index < 1 || index > list->size + 1) return 0;

	if(list->size == list->capacity) {
		int newCapacity = list->capacity + (list->capacity >> 1); // 扩容1.5倍
		E * newArray = (E *)realloc(list->array, newCapacity * sizeof(E)); // 重新分配内存
		if(newArray == NULL) return 0;
		list->array = newArray;
		list->capacity = newCapacity;
	}

	for (int i = list->size; i > index - 1; --i)
		list->array[i] = list->array[i - 1];
	list->array[index - 1] = element;
	list->size++;
	return 1;
}

bool deleteList(ArrayList list, int index){
	if(index < 1 || index > list->size) return 0;
	for (int i = index - 1; i < list->size - 1; ++i)
		list->array[i] = list->array[i + 1];
	list->size--;
	return 1;
}

int sizeList(ArrayList list){
	return list->size;
}

E * getList(ArrayList list, int index){
	if(index < 1 || index > list->size) return NULL;
	return &list->array[index - 1];
}

int findList(ArrayList list, E element){
	for (int i = 0; i < list->size; ++i) {
		if(list->array[i] == element) return i + 1;
	}
	return -1;
}

void printList(ArrayList list)
{
	for (int i = 0; i < list->size; i++)
	{
		std::cout << list->array[i];
		std::cout << " ";
	}
	std::cout << std::endl;
}

int main()
{
	struct List list;
	if (initList(&list)) {
		for (int i = 0;i < 30; i++)
		{
			insertList(&list, i*10, i + 1);
		}
		printList(&list);
		std::cout << list.capacity << std::endl;
	} else {
		std::cout << "顺序表初始化失败，无法启动程序！" << std::endl;
	}

	return 0;
}