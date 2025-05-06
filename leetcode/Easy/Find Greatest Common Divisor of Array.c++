
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
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums.front();
        int b = nums.back();
        return __gcd(a % b, b); 
    }
};
