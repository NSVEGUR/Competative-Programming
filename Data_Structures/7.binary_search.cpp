// Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

// You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
#include<vector>

using namespace std;

class Solution{
	public:
		int search(vector<int>& nums, int target){
			int l = 0, r = nums.size() -1 ;
			while(l <= r){
				int m = l + (r-l)/2;
				if(target == nums[m])
					return m;
				if(target > nums[m])
					l = m+1;
				else
					r = m-1;
			}
			return -1;
		}
};