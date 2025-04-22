#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string vectorToString(const vector<int>& nums) {
        string result;
        result.reserve(nums.size());
        for (int num : nums) {
            result += to_string(num);
        }
        return result;
    }

    string twoDigit(string s) {
        while (s.size() > 2) {
            vector<int> nums;
            for (int i = 0; i < s.size(); i++) {
                int x = (s[i] - '0' + s[i + 1] - '0') % 10;
                nums.push_back(x);
            }
            s = vectorToString(nums);
        }
        return s;
    }

    bool hasSameDigits(string s) {
        string x = twoDigit(s);
        return x[0] == x[1];
    }
};

int main() {
    Solution solution;
    string s;
    cin >> s;  // Input the string
    cout << boolalpha << solution.hasSameDigits(s) << endl;
    return 0;
}
