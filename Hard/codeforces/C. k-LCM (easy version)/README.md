# Problem Title: [k-LCM (easy version)]
- Platform: [codeforces]
- Problem Link: [https://codeforces.com/group/JESCgZZ8qn/contest/333990/problem/C]
- Difficulty: [Medium]
- Tags: [LCM,Number-Theory,Greedy]
- Date:[23/4/2025]

-----------

## Description
- Given a positive integer n, find 3 integers a1, a2, a3 such that their sum is n and their LCM is less than or equal to n^2. Solve for multiple test cases.

-----------

## Notes
- 

-----------

## My Code 
```cpp
void solve(){
    ll n,k;
    cin>>n>>k;
    if (n%2==1) 
        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
    else if (n % 3 == 0) 
        cout <<n/3<<" "<<n/3<< " " <<n/3<<endl;
    else {
        if((n/2)%2==1)
         cout<<n-(2*((n/2)-1))<<" "<<(n/2)-1<<" "<<(n/2)-1<<" "<<endl;
        else 
         cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
    }
    
}
```
## Complexity:
- Time: O(1)
- Space: O(1)

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