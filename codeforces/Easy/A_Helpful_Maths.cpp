
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
 string x;
 sort(all(s));
 int plus=count(all(s),'+');
 for(int i=plus;i<s.size();i++){
   x.pb(s[i]);
   x.pb('+');
 }
 x.pop_back();
 cout<<x;
}
 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}