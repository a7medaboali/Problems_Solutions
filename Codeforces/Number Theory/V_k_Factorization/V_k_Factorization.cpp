/*
a7medaboali
Rememeber My Name
*/
 
#include <bits/stdc++.h>
using namespace std;
#define aboali ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll         long long
#define ld         long double
#define dd         double
#define ef         else if
#define IMax       INT_MAX
#define IMin       INT_MIN
#define INF        LLONG_MAX
#define MOD        1000000007
#define pii        pair<int,int>
#define vi         vector<int>
#define vc         vector<char>
#define vl         vector<long long>
#define vs         vector<string>
#define vd         vector<double>
#define vvi        vector<vector<int>>
#define pb         push_back
#define mp         make_pair
#define all(x)     x.begin(),x.end()

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


int main(){
aboali
 
solve();
return 0;
}