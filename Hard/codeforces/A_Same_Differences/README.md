# Problem Title: [Same Differences]
- Platform: [codeforces]
- Problem Link: [https://codeforces.com/group/JESCgZZ8qn/contest/333990/problem/A]
- Difficulty: [Medium]
- Tags: [Array,Math,Combinatorics]
- Date:[21/4/2025]

-----------

## Description
- Given an array a of n integers, count the number of pairs (i,j) such that i < j and a_j - a_i = j - i

-----------

## Notes
- 

-----------

## My Code 
```cpp
void  solve(){
 ll n; cin>>n; 
 vector<ll> arr(n); for(int i=0;i<n;i++) cin>>arr[i];  
 map<ll,ll> freq;
 for(ll i=0;i<n;i++){
    freq[arr[i]-i]++;
 }
 ll total=0;
 for(auto& a:freq){
    if(a.second>1){
        total+=(a.second*(a.second-1))/2;
    }
 }
 cout<<total<<endl;
}
```
## Complexity:
- Time: O(n)
- Space: O(n)

-----------

## Ideal Solution
### Code:
```cpp

```

### Complexity:
- Time: O()
- Space: O()

-----------

## Another Solution
### Code:
```cpp

```
-----------

## Edge Cases