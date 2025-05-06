
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
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

vector<ll> PrimeDivisor(ll n){
  vector<ll> s;
  for(ll i=2;i*i<=n;i++){
     if(n%i==0){
        s.push_back(i);
        while (n%i==0) n/=i;
    } 
  }
  if (n>1) s.push_back(n);
  return s;
}

void  solve(){
  ll n; cin>>n;
  vector<ll> divisor; 
  ll count=0;
  for(int i=1;i<=n;i++){
    divisor=PrimeDivisor(i);
    if(divisor.size()==2)  count++;
  }
  cout<<count;
}
 
int main(){
aboali
 
solve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}