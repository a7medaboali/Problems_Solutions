
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
 vector<int> arr(n); for(int i=0;i<n;i++) cin>>arr[i];
 map<int,int> f;
 for(int i=0;i<n;i++) f[arr[i]]++;
 cout<<f.size()<<endl;
}
 
int main(){
aboali
 

int t;
cin>>t;
while(t--){
    mySolve();
}
 
}