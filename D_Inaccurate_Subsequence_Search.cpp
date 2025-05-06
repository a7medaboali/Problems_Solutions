 
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
 int n,m,k; cin>>n>>m>>k;
 vector<int> a(n),b(m);
 unordered_map<int,int>mp;
 unordered_map<int,int>window;
 for(int i=0;i<n;i++) cin>>a[i];
 for(int i=0;i<m;i++){
    cin>>b[i];
    mp[b[i]]++;
 } 

 int l=0,r=0,cnt=0,ans=0;
 while(r<m){
    if(window[a[r]]<mp[a[r]]) cnt++;
 }
 
}
 
int main(){
aboali
 

int t;
cin>>t;
while(t--){
    mySolve();
}
 
}