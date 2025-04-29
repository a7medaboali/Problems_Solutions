# Problem Title: [Asuna and the Mosquitoes]
- Platform: [codeforces]
- Problem Link: [https://codeforces.com/contest/2092/problem/C]
- Difficulty: [Medium]
- Tags: [Greedy]
- Date:[27/4/2025]

-----------

## Description
-Asuna evaluates the beauty of the gifts by maximizing the height of the tallest tower after performing a series of operations where she can transfer height between two towers if their sum is odd, and the first tower has a height greater than 0. The goal is to determine the maximum possible beauty (maximum tower height) after applying the operation multiple times.

-----------

## Notes
- 

-----------

## My Code 
```cpp
void  mySolve(){
 int n; cin>>n; ll maxBeauty=0;
 vi arr(n); for(int i=0;i<n;i++) cin>>arr[i];
 int x=arr[0]%2; bool same=true;
 for(int i=0;i<n;i++){
    if(arr[i]%2!=x){
        same=false;
        break;
    } 
 }
 if (same) {
    cout << *max_element(all(arr)) << endl;
} else {
    ll sum=0; int odd=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]%2==1) odd++;
    } 
    cout<<sum-odd+1<<endl;

}
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
    int n; cin >> n;
    vector <int> a(n);
    long long ans = 0, cnt = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ans += a[i]; cnt += (a[i] & 1);
    }
    if (!cnt || cnt == n) {
        cout << *max_element(a.begin(), a.end()) << '\n';
    } else {
        cout << ans - cnt + 1 << '\n';
    }
}
```

### Complexity:
- Time: O(n)
- Space: O(n)

-----------

## Other Solutions
### Code:
```cpp

```
-----------
