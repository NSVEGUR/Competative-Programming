// Given an integer array nums, return true if any value appears at least twice in the array, 
// and return false if every element is distinct.

#include<iostream>
#include<vector>
#include<set>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        return nums.size() > set<int>(nums.begin(), nums.end()).size();
    }
};

int main(){
    Solution s;
    vector<int> v{1,1,1, 2, 3, 4, 5, 6, 7, 8};  
    cout<<s.containsDuplicate(v)<<endl;
    return 0;
}