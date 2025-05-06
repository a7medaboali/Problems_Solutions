
/*
Problem Link:[https://leetcode.com/problems/array-partition/description/]
Tags:[Greedy]
Date:[2/5/2025] 
Notes:
*/
 
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int cnt = 0;
        for(int i = 0; i < nums.size(); i += 2){
            cnt += nums[i];
        }
        return cnt;
    }
};

