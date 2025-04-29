/*
Problem Link:[https://codeforces.com/gym/307293/problem/A]
Tags:[Mathematics,Greedy]
Date:[23/4/2025] 
Notes:
*/
 
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
*/
 
#include <bits/stdc++.h>
using namespace std;
#define aboali ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll         long long
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

bool isprime(ll x){
 if(x==2) return true;
 if(x%2==0)return false;
 for(ll i=3;i*i<=x;i+=2){
    if(x%i==0) return false;
 }
  return true;
}

 void solve(){
 ll n; cin>>n;
 for(ll a=4;a<n;a++){
    ll b=n-a;
    if(!isprime(a) && !isprime(b)) {
        cout<< a << " " << b;
        return ;
    } 
 }
}
 
int main(){
aboali
 
solve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}