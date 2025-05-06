
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
*/

#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t pos = haystack.find(needle);
        int x = -1;
        if (pos != string::npos) {
            x = pos;
        }
        return x;
    }
};
