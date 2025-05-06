/*
Problem Link:[https://codeforces.com/problemset/problem/96/A]
Tags:[]
Date:[2/5/2025] 
Notes:- s.find("1111111") returns an index (type: size_t)
      - string::npos is a special value meaning “not found”
      - The comparison != gives a boolean result
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
 string s; cin>>s;
 if(s.find("0000000")!=string::npos || s.find("1111111")!=string::npos)
  cout<<"YES";
 else
  cout<<"NO";
}
 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}