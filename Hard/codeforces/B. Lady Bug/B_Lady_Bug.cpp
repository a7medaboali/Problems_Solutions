/*
a7medaboali
Rememeber My Name
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
 
void  mySolve(){
  int n; cin>>n;
  string a,b; cin>>a>>b;
  vi z1; vi z2;
  for(int i=0;i<n;i++){
    if(i&1){
        z1.pb(b[i]-'0');
        z2.pb(a[i]-'0');
    }
    else{
        z2.pb(b[i]-'0');
        z1.pb(a[i]-'0');
    }
  }
  int z1_zeros=count(all(z1),0);
  int z2_zeros=count(all(z2),0);
  if(z1_zeros<ceil(n/2.0) || z2_zeros<floor(n/2.0)) cout<<"NO\n";
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