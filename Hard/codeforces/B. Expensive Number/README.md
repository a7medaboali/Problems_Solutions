# Problem Title: [Expensive Number]
- Platform: [codeforces]
- Problem Link: [https://codeforces.com/contest/2093/problem/B]
- Difficulty: [Medium]
- Tags: [Greedy,Mathematics,String-Manipulation]
- Date:[25/4/2025]

-----------

## Description
- You are given a positive integer n. You can remove any number of digits from n to minimize its "cost", which is defined as n / sum_of_digits(n). The goal is to determine the minimum number of digits to remove to achieve the lowest possible cost.

-----------

## Notes
- 

-----------

## My Code 
```cpp
void  mySolve(){
 string s; cin>>s;
 int index_last=0;
 for(int i=s.size()-1;i>=0;i--){
    if(s[i]!='0'){
        index_last=i;
        break;
    }
 }
 ll leading_zeros= count(s.begin(),s.begin()+index_last,'0');
 ll sum=(s.size()-1)-leading_zeros; //(index_last-leading_zeros)+(s.size()-index_last);
 cout<<sum<<endl;
}
```
## Complexity:
- Time: O(n)
- Space: O(n)

-----------

## Ideal Solution
### Code:
```cpp
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();
        bool met_positive = false;
        int cnt_zero = 0;
        
        for (auto i = n - 1; i >= 0; --i) {
            if (s[i] != '0') {
                met_positive = true;
            } else if (met_positive) {
                cnt_zero++;
            }
        }
        
        cout << n - (cnt_zero + 1) << '\n';
    }
    return 0;
}
```

### Complexity:
- Time: O(n)
- Space: O(n)

-----------

## Another Solution
### Code:
```cpp

```
-----------

## Edge Cases