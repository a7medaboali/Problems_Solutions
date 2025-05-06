/*
Problem Link:[https://codeforces.com/contest/2069/problem/A]
Tags:[]
Date:[1/5/2025] 
Notes: I learn how to use vector to string and how to check if substring is found or not
       Also I could input the string directly but first I must remove the spaces
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
#define pb         push_back
#define all(x)     x.begin(),x.end()
 
void  mySolve(){
 int n; cin>>n;
 vector<int> arr(n-2); for(int i=0;i<n-2;i++) cin>>arr[i];
 string s = "";
 for (int num : arr) {
     s += to_string(num); // or s += char(num + '0');
    }
    if(s.find("101") != string::npos)  cout<<"NO\n";
    else cout<<"YES\n";
}
 
int main(){
aboali
 
int t;
cin>>t;
while(t--){
    mySolve();
}
 
}