
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
    bool isThree(int n) {
        bool isThree = false;
        vector<int> divisor;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                divisor.push_back(i);
                if (i * i != n) divisor.push_back(n / i);
            }
        }
        if (divisor.size() == 3) isThree = true;
        return isThree;
    }
};