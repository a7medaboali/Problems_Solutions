
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
 int x=0,y=0,z=0;
 while(n--){
    int a,b,c;
    cin>>a>>b>>c;
    x+=a; y+=b; z+=c;
 }
 if(x!=0 || y!=0 || z!=0 ) cout<<"NO";
 else cout<<"YES";
}
 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}