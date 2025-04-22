#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n == 1) return false;
        if (n != 2 && n % 2 == 0) return false;
        for (long long i = 3; i * i <= n; i += 2) {
            if (n % i == 0) return false;
        }
        return true;
    }

    int maximumPrimeDifference(vector<int>& nums) {
        int first = -1, last = -1;
        
        // Finding the first prime number
        for (int i = 0; i < nums.size(); i++) {
            if (isPrime(nums[i])) {
                first = i;
                break;
            }
        }
        
        // Finding the last prime number
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (isPrime(nums[i])) {
                last = i;
                break;
            }
        }

        // If no prime numbers found, return 0
        if (first == -1 || last == -1) return 0;

        return last - first;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {10, 5, 7, 2, 11, 3}; // Example input, you can modify as needed
    int result = sol.maximumPrimeDifference(nums);
    cout << "Maximum Prime Difference: " << result << endl;
    return 0;
}
