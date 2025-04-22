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

vector<ll> Divisors(ll n){
  vector<ll>x;
  for(ll i=1;i*i<=n;i++){
     if(n%i==0){
        x.push_back(i);
        if(i*i!=n) x.push_back(n/i);
     } 
  }
  sort(x.begin(),x.end());
  return x;
}

int main(){
aboali

ll n,index; cin>>n>>index;
vector<ll> arr=Divisors(n);
if(index>arr.size()) cout<<"-1";
else cout<<arr[index-1];
// int t;
// cin>>t;
// while(t--){
  
// }
 
}
