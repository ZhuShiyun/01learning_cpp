/**
  ******************************************************************************
  * @file           : 04binary_search.cpp
  * @author         : b-zhushiyun
  * @brief          : 二分搜索
  * @attention      : None
  * @date           : 23-11-30
  ******************************************************************************
  */
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

int search(int* nums, int numsSize, int target){
	//请实现查找算法
	int left = 0, right = numsSize - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (nums[mid] == target) {
			return mid;
		} else if (nums[mid] > target) {
			right = mid - 1;
		} else {
			left = mid + 1;
		}
	}
	return -1; // 如果没有找到，返回-1
}

class Solution {
 public:
	int search(vector<int>& nums, int target) {
		int left = 0, right = nums.size() - 1;
		while (right >= left) {
			int mid = (left + right) / 2;
			if (nums[mid] == target) {
				return mid;
			} else if (nums[mid] > target) {
				right = mid - 1;
			} else {
				left = mid + 1;
			}
		}
		return -1; // 如果没有找到，返回-1
	}
};

int main() {
	int arr[] = {1, 3, 4, 6, 7,8, 10, 11, 13, 15}, target = 3;
	printf("%d", search(arr, 10, target));
}

