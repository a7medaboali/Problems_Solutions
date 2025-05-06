 
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
 int n,k; cin>>n>>k; 
 int count=0;
 k--;
 vi arr(n); for(int& x:arr) cin>>x;
 int target=arr[k];
 sort(all(arr));
 if (all_of(arr.begin(), arr.end(), [](int x){ return x == 0; })){
    cout<<"0";
    return;
 }
 if(target==0){
    for(int x:arr){
    if(x>target) count++;
    }
 } else{
    for(int x:arr){
       if(x>=target) count++;
     }  
 }
 cout<<count;
}
 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}