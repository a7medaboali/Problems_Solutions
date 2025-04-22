#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> frac;
        n++;
        while(n--) {
            for(int j = 1; j < n; j++) {
                if(gcd(j, n) == 1) {
                    string fraction = to_string(j) + "/" + to_string(n);
                    frac.push_back(fraction);
                }
            }
        }
        sort(frac.begin(), frac.end());
        return frac;
    }
};

int main() {
    Solution sol;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<string> result = sol.simplifiedFractions(n);

    cout << "Simplified Fractions:\n";
    for (const string& frac : result) {
        cout << frac << " ";
    }
    cout << endl;

    return 0;
}
