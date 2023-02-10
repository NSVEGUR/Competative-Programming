// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
				int m;
				while(l <= r){
					m = l + (r - l)/2;
					if(nums[m] == target)
						return m;
					if(target > nums[m]){
						l = m+1;
					}else{
						r = m-1;
					}
				}
				if(target > nums[m]){
					return m + 1;
				}else{
					return m;
				}
    }
};