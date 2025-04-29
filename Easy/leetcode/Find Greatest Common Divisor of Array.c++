/*
Problem Link:[https://leetcode.com/problems/find-greatest-common-divisor-of-array/description/]
Tags:[]
Date:[19/4/2025] 
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

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums.front();
        int b = nums.back();
        return gcd(a % b, b); 
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 5, 6, 9, 10}; 
    cout << sol.findGCD(nums) << endl;
    return 0;
}
