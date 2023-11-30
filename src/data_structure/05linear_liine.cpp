/**
  ******************************************************************************
  * @file           : 05linear_liine.cpp
  * @author         : b-zhushiyun
  * @brief          : 线性表
  * @attention      : None
  * @date           : 23-11-30
  ******************************************************************************
  */
#include <iostream>
#include <malloc.h>

typedef int E;   //定义一个元素类型

struct List {
	E * array;   //指向顺序表的底层数组
	int capacity;   //数组的容量
	int size;   //表中的元素数量
};

typedef struct List * ArrayList;

/**
 * @brief 初始化一个线性表
 * @return
 */
bool initList(ArrayList list) {
	list->capacity = 10;
	list->array = (E *) malloc(sizeof(E) * list->capacity); // 为数组分配内存
	if (list->array == NULL) {
		return 0;
	}
	list->size = 0;
	return 1;
}

/**
 * @brief 打印线性表
 * @param list
 */
void insertList(ArrayList list, E element, int index){
	//list就是待操作的表，element就是需要插入的元素，index就是插入的位置（注意顺序表的index是按位序计算的，从1开始，一般都是第index个元素）
	for (int i = list->size; i > index - 1; i--)  //先使用for循环将待插入位置后续的元素全部丢到后一位
		list->array[i] = list->array[i - 1];
	list->array[index - 1] = element;    //挪完之后，位置就腾出来了，直接设定即可
	list->size++;   //别忘了插入之后相当于多了一个元素，记得size + 1
}

void printList(ArrayList list)
{
	for (int i = 0; i < sizeof(list); i++)
	{
		std::cout << list->array[i] << std::endl;
	}
	std::cout << std::endl;
}

int main() {
	struct List list;   //创建新的结构体变量
	if(initList(&list)){   //对其进行初始化，如果失败就直接结束
		printf("顺序表初始化成功，可以启动程序！\n");
	} else{
		printf("顺序表初始化失败，无法启动程序！\n");
	}
	insertList(&list, 666, 1);
	printList(&list);
	insertList(&list, 777, 1);
	printList(&list);
	insertList(&list, 888, 3);
	printList(&list);

}


