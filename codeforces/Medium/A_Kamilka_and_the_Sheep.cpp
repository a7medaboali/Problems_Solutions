
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
 vi arr(n); for(int i=0;i<n;i++) cin>>arr[i];
 sort(all(arr));
 cout<<arr[arr.size()-1]-arr[0]<<endl;
}
 
int main(){
aboali
 

int t;
cin>>t;
while(t--){
    mySolve();
}
 
}