# Problem Title: [Sakurako and Water]
- Platform: [codeforces]
- Problem Link: [https://codeforces.com/contest/2033/problem/B]
- Difficulty: [Medium]
- Tags: [Greedy,Matrix]
- Date:[27/4/2025]

-----------

## Description
-In this problem, Sakurako and Kosuke are exploring a valley represented by an n×n matrix of mountain heights. If an element is negative, it indicates a lake. Sakurako can use magic to increase the heights of mountains along a diagonal of any submatrix, aiming to remove all lakes by making them non-negative. The task is to determine the minimum number of magic operations needed for each test case to remove all lakes.

-----------

## Notes
- 

-----------

## My Code 
```cpp
void  mySolve(){
 int n; cin>>n;
 vector<vector<bool>> checked(n, vector<bool>(n, false));
 vector<vector<int>> subMatrix;
 vector<vector<int>> m(n, vector<int>(n));
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>m[i][j];
    }
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(m[i][j]<0 && !checked[i][j]){
            vector<int> diagonal;
            diagonal.push_back(m[i][j]);
            checked[i][j]=true;
            int x=i+1, y=j+1;
            while(x<n && y<n){
                if(m[x][y]<0){
                    diagonal.push_back(m[x][y]);
                    checked[x][y]=true;
                }
                x++;
                y++;
            }
            subMatrix.push_back(diagonal);
        }
    }
}

 ll sum=0;
 for(auto& x:subMatrix){
    sum+=*min_element(all(x));
 }
cout<<abs(sum)<<endl;
  
}
```
## Complexity:
- Time: O(n^2)
- Space: O(n^2)

-----------

## Ideal Solution
### Code:
```cpp
void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> mn;  // Using an unordered map to store the minimum values
    for (int i = 0; i < n; ++i) {
        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        for (int j = 0; j < n; ++j) {
            int diff = i - j;
            mn[diff] = min(a[j], mn[diff] == 0 ? a[j] : mn[diff]);
        }
    }
    
    long long ans = 0;
    for (const auto& value : mn) {
        ans -= value.second;
    }
    
    cout << ans << endl;
}
```

### Complexity:
- Time: O(n^2)
- Space: O(n^2)

-----------

## Another Solution
### Code:
```cpp

```
-----------

## Edge Cases
