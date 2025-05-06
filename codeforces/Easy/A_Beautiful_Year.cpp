/*
Problem Link:[https://codeforces.com/problemset/problem/271/A]
Tags:[]
Date:[2/5/2025] 
Notes: - string s=to_string(num) ->convert num to string
       - set<char>(all(s)) store the unique chars of the string
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
 int num; cin>>num;
 num++;
 while(true){
    string s=to_string(num);
    set<char>uni(s.begin(),s.end());
    if(uni.size()==4) break;
    else num++;
}
cout<<num;
}
 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}