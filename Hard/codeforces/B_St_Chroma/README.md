# Problem Title: [St. Chroma]
- Platform: [codeforces]
- Problem Link: [https://codeforces.com/contest/2106/problem/B]
- Difficulty: [Medium]
- Tags: [Mathematics,Greedy,Permutations]
- Date:[28/4/2025]

-----------

## Description
- Given a permutation of length n containing integers from 0 to n-1, and a strip of n cells, the task is to create a permutation such that the number of cells painted in color x is maximized. The color of each cell is determined by the MEX (Minimum Excluded Value) of the numbers seen so far in the permutation. You are to output the permutation of n that maximizes the occurrence of color x.

-----------

## Notes
- 

-----------

## My Code 
```cpp
void  mySolve(){
 int n,x; cin>>n>>x;
 vi arr;
 if (x==n) {
    for (int i=0;i<n;i++) 
        arr.pb(i);
    }
  else {
    for(int i=0;i<x;i++) {
        arr.pb(i);
      }
      for(int i=x+1;i<n-1;i++) {
        arr.pb(i);
      }
    arr.pb(x);
 }
   for(int x:arr) cout<<x<<" ";
   cout<<endl;
}
```
## Complexity:
- Time: O(n)
- Space: O(n)

-----------

## Ideal Solution
### Code:
```cpp
void solve() {
    int n, x; cin >> n >> x;
    for (int i = 0; i < x; i++) cout << i << " ";
    for (int i = x+1; i < n; i++) cout << i << " ";
    if (x < n) cout << x;
    cout << '\n';
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