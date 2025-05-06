/*
Problem Link:[https://codeforces.com/group/9QrbarK7qH/contest/481806/problem/L]
Tags:[]
Date:[21/4/2025] 
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


ll gcd(ll a, ll b){
 if(b==0) return a;
 return gcd(b,a%b);
}
ll lcm(ll a, ll b){
    return (a/gcd(a,b))/b;
}

void  solve(){
 ll x; cin>>x;
 for (ll a=1; a<x;++a) {
    ll b= x-a;
    if (gcd(a,b) + lcm(a,b) ==x) {
        cout<<a<<" "<<b<<"\n";
        break;
    }
}

}

void solve2(){
    ll x; cin>>x;
    cout<<1<<" "<<x-1<<endl;
}
 
int main(){
aboali

int t;
cin>>t;
while(t--){
    solve();
}
 
}