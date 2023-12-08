/**
  ******************************************************************************
  * @file           : binary_search.cpp
  * @author         : b-zhushiyun
  * @brief          : None
  * @attention      : None
  * @date           : 23-12-8
  ******************************************************************************
  */
#include <iostream>

using namespace std;

int binary_search(int *arr, int target)
{
	// 初始化左指针left为数组的起始位置，右指针right为数组的结束位置。
	int left = 0;
	int right = sizeof(arr) - 1;

	// 循环执行以下步骤，直到左指针大于右指针：
	while (left <= right)
	{
		// 计算中间位置mid，即mid = (left + right) / 2。
		int mid = (left + right) / 2;

		// 如果中间元素等于目标值，则返回中间位置mid。
		if (arr[mid] == target){
			return arr[mid];
		}
		else if (arr[mid] > target){
			// 如果中间元素大于目标值，则将右指针right移动到中间位置mid处。
			right = mid - 1;
		}
		else if (arr[mid] < target){
			// 如果中间元素小于目标值，则将左指针left移动到中间位置mid处。
			left = mid - 1;
		}
		return -1;
	}
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int target = 9;

	int result = binary_search(arr, target);

	cout << "result = " << result << endl;

	return 0;
}