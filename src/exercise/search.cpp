/**
  ******************************************************************************
  * @file           : search.cpp
  * @author         : b-zhushiyun
  * @brief          : There is an integer array nums sorted in ascending order (with distinct values).
  * Prior to being passed to your function,
  * nums is possibly rotated at an unknown pivot index k (1 <= k < nums.length) such that the resulting array is
  * [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed).
  * For example, [0,1,2,4,5,6,7] might be rotated at pivot index 3 and become [4,5,6,7,0,1,2].
  * Given the array nums after the possible rotation and an integer target,
  * return the index of target if it is in nums, or -1 if it is not in nums.
  * You must write an algorithm with O(log n) runtime complexity.
  * @attention      : None
  * @date           : 23-10-30
  ******************************************************************************
  */
#include <iostream>
#include <vector>

using namespace std;
class Solution {
 public:
	int search(vector<int>& nums, int target) {
		int numsSize = nums.size();
		for (int i = 0; i < numsSize; i++)
		{
			if (target == nums[i])
				return i;
		}
		return -1;;
	}
};


int main()
{
	Solution solution;
	vector<int> nums = {1,3,5,7,9};
	cout << solution.search(nums,5) << endl;

	return 0;
}
