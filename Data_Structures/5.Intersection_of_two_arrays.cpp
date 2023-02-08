// Given two integer arrays nums1 and nums2, return an array of their intersection. 
// Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.
#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> u_map;
				vector<int> v;
				for(int i = 0; i < nums1.size(); ++i){
					if(u_map.find(nums1[i]) == u_map.end()){
						u_map[nums1[i]] = 1;
					}else{
						u_map[nums1[i]] += 1;
					}
				}
				for(int i = 0; i < nums2.size(); ++i){
					if(u_map.find(nums2[i]) != u_map.end() && u_map[nums2[i]] > 0){
							v.push_back(nums2[i]);
							u_map[nums2[i]] -= 1;
					}
				}
				return v;
    }
};