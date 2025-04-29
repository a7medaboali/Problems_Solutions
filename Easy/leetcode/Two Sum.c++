/*
Problem Link:[https://leetcode.com/problems/two-sum/description/]
Tags:[]
Date:[20/5/2025] 
Notes:
*/
 
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
*/
 
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> x;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 1; j < nums.size(); j++) {
                if(nums[i] + nums[j] == target) {
                    x.push_back(i);
                    x.push_back(j);
                    break;
                }
            }
        }
        return x;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 7, 11, 15}; // Example input
    int target = 9;
    vector<int> result = sol.twoSum(nums, target);
    
    cout << "Indices: ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    
    return 0;
}
