# Problem Title: [Dr. TC]
- Platform: [codeforces]
- Problem Link: [https://codeforces.com/contest/2106/problem/A]
- Difficulty: [Easy]
- Tags: [Binary,Counting,Grid]
- Date:[28/4/2025]

-----------

## Description
- Dr. TC creates binary strings by flipping each character of a given binary string s in each row, creating a grid. The task is to count how many 1s are present in all the rows of the grid formed by flipping each character in the original string.

-----------

## Notes
- 

-----------

## My Code 
```cpp
void  mySolve(){
  int n; cin>>n;
  string s; cin>>s;
  int size=s.size();
  int zeros=count(all(s),'0');
  int ones=count(all(s),'1');
  int total_ones= (size*size)-(ones+(zeros*size)-zeros);
  cout<<total_ones<<endl;
}
```
## Complexity:
- Time: O(1)
- Space: O(1)

-----------

## Ideal Solution
### Code:
```cpp
void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    for (auto x: s) {
        if (x == '0') ans++;
        else ans += n - 1;
    }
    cout << ans << '\n';
}
```

### Complexity:
- Time: O(n)
- Space: O(1)

-----------

## Another Solution
### Code:
```cpp

```
-----------

## Edge Cases