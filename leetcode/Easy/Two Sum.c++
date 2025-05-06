
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

