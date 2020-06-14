#define _CRT_SECURE_NO_WARNINGS
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end()); //排序
		vector<vector<int>> res; //定义输出
		for (int i = 0; i < int(nums.size() - 2) && nums[i] <= 0; i++) {//如果当前数字大于0，则三数之和一定大于0，结束循环
			if (i > 0 && nums[i] == nums[i - 1]) continue; //(i > 0)防止越界
			int j = i + 1, k = nums.size() - 1;
			while (j < k && nums[k] >= 0) { //如果nums[k] < 0，则三数之和一定小于0.结束循环
				if (nums[j] + nums[k] == -nums[i]) {
					res.push_back({ nums[i], nums[j], nums[k] });
					while (j < k && nums[j] == nums[j + 1]) j++;
					while (j < k && nums[k] == nums[k - 1]) k--;
					j++, k--;
				}
				else if (nums[j] + nums[k] < -nums[i]) j++;
				else k--;
			}
		}
		return res;
	}
};