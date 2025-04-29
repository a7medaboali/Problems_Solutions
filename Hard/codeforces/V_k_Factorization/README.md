# Problem Title: [k-Factorization]
- Platform: [codeforces]
- Problem Link: [https://codeforces.com/group/9QrbarK7qH/contest/481806/problem/V]
- Difficulty: [Medium]
- Tags: [Number-Theory,Factorization,Product-Decomposition]
- Date:[22/4/2025]

-----------

## Description
- Given a number n and an integer k, find k integers greater than 1 such that their product equals n. If it's not possible, print -1.

-----------

## Notes
- 

-----------

## My Code 
```cpp
map<ll,ll> PrimeDivisor(ll n){
    map<ll,ll> freq;
    for(ll i=2;i*i<=n;i++){
       if(n%i==0){
          while (n%i==0){
            freq[i]++;
            n/=i;
          }
      } 
    }
    if (n>1) freq[n]++;
    return freq;
}

void solve(){
    ll n,k; cin>>n>>k; 
    vector<ll>nums;
    map<ll,ll> freq = PrimeDivisor(n);
    ll totalFreq=0;
    for (auto [prime,count] : freq) {
        totalFreq+=count;
    }
    if(totalFreq<k) {cout<<"-1"; return;}

     for (auto& x : freq) {
        while(x.second>0 && nums.size()<k-1){
        nums.push_back(x.first);
        x.second--;
        }
    }
     ll remain=1;
     for (auto& x : freq) {
        while(x.second>0){
        remain*=x.first;
        x.second--;
        }
    }
     nums.push_back(remain);
     for (ll factor : nums ) cout << factor << " ";
    }
```
## Complexity:
- Time: O(sqrt(n))
- Space: O(log n)

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