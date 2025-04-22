#include <iostream>
#include <vector>
#include <algorithm> // for sort
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
        return gcd(a % b, b); // using your original logic
    }
};

int main() {
    Solution sol;
    vector<int> nums = {2, 5, 6, 9, 10}; // sample input
    cout << sol.findGCD(nums) << endl;
    return 0;
}
