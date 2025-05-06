 
/*
Road to Master
-Start-> 19/4/2025
-End-> 1/1/2026
*/
 
#include <bits/stdc++.h>
using namespace std;
#define aboali ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll         long long
#define dl         endl
#define MOD        1000000007
#define pb         push_back
#define all(x)     x.begin(),x.end()
 
void  mySolve(){
int n,m,l,r; cin>>n>>m>>l>>r;
 l=-l;
 int cntr=0; int cntl=0;
 while(cntr<m && cntr<r){
   cntr++;
 }
cntl=m-cntr;
 cout<<-cntl<<" "<<cntr<<dl;
}
 
int main(){
aboali
 
int t;
cin>>t;
while(t--){
    mySolve();
  
}
 
}