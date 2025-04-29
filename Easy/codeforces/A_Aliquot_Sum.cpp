/*
Problem Link:[https://codeforces.com/group/9QrbarK7qH/contest/481806/problem/A]
Tags:[Math,Divisors]
Date:[18/4/2025] 
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
 
void  solve(){
    int n; cin>>n;
    ll sum=0;
    if (n == 1) {
        cout << "deficient\n";
        return;
    }
    for(ll i=1;i*i<=n;i++){ // not start from i=0 it causes time error
       if(n%i==0){
        sum+=i;
        if(i!=n/i && i!=1)
        sum+=(n/i);
       } 
      
    }
    if(sum>n)
    cout<<"abundant\n";
    ef(sum<n)
    cout<<"deficient\n";
    else cout<<"perfect\n";
 
}
 
int main(){
aboali
int t; cin>>t;
while (t--){
    solve();
}

 
}