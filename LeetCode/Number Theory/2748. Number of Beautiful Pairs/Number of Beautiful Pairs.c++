#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric> 
using namespace std;

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                int first_digit = to_string(nums[i])[0] - '0';
                int last_digit = nums[j] % 10;
                if (gcd(first_digit, last_digit) == 1) counter++;
            }
        }
        return counter;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {12, 34, 56, 78};  
    int result = sol.countBeautifulPairs(nums);
    cout << "Count of Beautiful Pairs: " << result << endl;
    return 0;
}
