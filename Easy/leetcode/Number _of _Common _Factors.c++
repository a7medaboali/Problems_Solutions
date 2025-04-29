/*
Problem Link:[https://leetcode.com/problems/number-of-common-factors/description/]
Tags:[]
Date:[22/4/2025] 
Notes:
*/
 
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
*/

#include <iostream>
#include <algorithm> 
using namespace std;

class Solution {
public:
    int commonFactors(int a, int b) {
        int counter = 0;
        for (int i = 1; i <= min(a, b); i++) {
            if (a % i == 0 && b % i == 0) {
                counter++;
            }
        }
        return counter;
    }
};

int main() {
    Solution solution;

    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = solution.commonFactors(a, b);
    cout << "Number of common factors: " << result << endl;

    return 0;
}
