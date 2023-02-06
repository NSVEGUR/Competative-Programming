//Given an integer array nums, find the subarray
//with the largest sum, and return its sum.


//KADANE's Algorithm
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN;
        int max_till_here = 0;
        for(int i = 0; i < nums.size(); ++i){
            max_till_here += nums[i];
            max_so_far = max(max_so_far, max_till_here);
            if(max_till_here < 0)
                max_till_here = 0;
        }
        return max_so_far;
    }
};