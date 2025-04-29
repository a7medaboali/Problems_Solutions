# Problem Title: [Lady Bug]
- *Platform:* [codeforces]
- *Problem Link:* [https://codeforces.com/contest/2092/problem/B]
- *Difficulty:* [Medium]
- *Tags:* [Greedy]

-----------

## Description
- Lady Bug needs to crack a password consisting of two bit strings, a and b, each of length n. Lady Bug can perform two types of operations on these strings:

Swap a[i] and b[i-1] for any 2 ≤ i ≤ n.

Swap b[i] and a[i-1] for any 2 ≤ i ≤ n.

The goal is to determine if it's possible to transform string a into a string of all zeros using these operations, for each test case.

-----------

## My Understanding
- I understood what he wants but I don't know how to implement that so I watch a hint
  that said its like *zig zag* 

-----------

## My Code 
```cpp
   void  mySolve(){
  int n; cin>>n;
  string a,b; cin>>a>>b;
  vi z1; vi z2;
  for(int i=0;i<n;i++){
    if(i&1){
        z1.pb(b[i]-'0');
        z2.pb(a[i]-'0');
    }
    else{
        z2.pb(b[i]-'0');
        z1.pb(a[i]-'0');
    }
  }
  int z1_zeros=count(all(z1),0);
  int z2_zeros=count(all(z2),0);
  if(z1_zeros<ceil(n/2.0) || z2_zeros<floor(n/2.0)) cout<<"NO\n";
  else cout<<"YES\n";
  
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
    string a, b; cin >> a >> b;
    int cnt1 = 0, cnt2 = 0;
    for (int i = 0; i < n; ++i) {
        if (i & 1) {
            cnt2 += a[i] == '0';
            cnt1 += b[i] == '0';
        } else {
            cnt1 += a[i] == '0';
            cnt2 += b[i] == '0';
        }
    }
    cout << (cnt1 >= (n + 1) / 2 && cnt2 >= n / 2 ? "Yes" : "No") << '\n';
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

-----