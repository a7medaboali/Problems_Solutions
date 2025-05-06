
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
*/

#include <iostream>
using namespace std;

class Solution {
public:
    int smallestEvenMultiple(int n) {
        if (n % 2 == 0)
            return n;
        else
            return n * 2;
    }
};
