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

int main() {
    Solution solution;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = solution.smallestEvenMultiple(n);
    cout << "Smallest even multiple: " << result << endl;

    return 0;
}
