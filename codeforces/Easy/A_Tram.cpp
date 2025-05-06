 
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
 int mx=0; int current=0;
 for(int i=0;i<n;i++){
    int a,b; cin>>a>>b;
    current+=b;
    current-=a;
    if(current>mx){
        mx=current;
    }
 }
 cout<<mx;
}
 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
    
// }
 
}