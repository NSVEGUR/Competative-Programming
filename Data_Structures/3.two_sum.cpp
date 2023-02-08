// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

// Brute Force Approach
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
				for(int i = 0; i < nums.size() - 1; ++i){
					for(int j = i+1; j < nums.size(); ++j){
						if(nums[i]+nums[j] == target){
							return {i, j};
						}
					}
				}
				return {-1, -1};
    }
};


//Optimised using unordered maps (which implemented using hash function and hence searching will be O(1))
class Optimised{
	public:
		vector<int> twoSum(vector<int>& nums, int target){
			unordered_map<int, int> u_map;
			for(int i = 0; i < nums.size(); ++i){
				if(u_map.find(target - nums[i]) == u_map.end()){
					u_map[nums[i]] = i;
				}
				else{
					return {u_map[target - nums[i]], i};
				}
			}
			return {-1, -1};
		}
};