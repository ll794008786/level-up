#define _CRT_SECURE_NO_WARNINGS
#include<vector>
#include<algorithm>
#include<iostream>

using namespace std;

class Solution {
public:
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end()); //����
		vector<vector<int>> res; //�������
		for (int i = 0; i < int(nums.size() - 2) && nums[i] <= 0; i++) {//�����ǰ���ִ���0��������֮��һ������0������ѭ��
			if (i > 0 && nums[i] == nums[i - 1]) continue; //(i > 0)��ֹԽ��
			int j = i + 1, k = nums.size() - 1;
			while (j < k && nums[k] >= 0) { //���nums[k] < 0��������֮��һ��С��0.����ѭ��
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