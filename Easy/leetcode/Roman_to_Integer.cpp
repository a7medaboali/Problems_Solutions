/*
Problem Link:[https://leetcode.com/problems/roman-to-integer/]
Tags:[String,Hash Table]
Date:[29/4/2025] 
Notes: there is special conditions when a small roman before large roman so it become
       (large-small) and then skip the large in the for loop to avoid duplicate
*/
 
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
*/
 
#include <iostream>
#include <map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = {
            {'I', 1},{'V', 5},{'X', 10},{'L', 50},
            {'C', 100},{'D', 500},{'M', 1000}
        };
        
        int sum = 0;
        for(int i = 0; i < s.size(); i++) {
            if(i + 1 < s.size() && roman[s[i]] < roman[s[i+1]]) {
                sum += roman[s[i+1]] - roman[s[i]];
                i++;
            } else {
                sum += roman[s[i]];
            }
        }
        return sum;
    }
};

int main() {
    Solution sol;
    string s;
    cout << "Enter a Roman numeral: ";
    cin >> s;
    int result = sol.romanToInt(s);
    cout << "Integer value: " << result << endl;
    return 0;
}
