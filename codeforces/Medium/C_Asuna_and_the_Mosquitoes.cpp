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
 int n; cin>>n; ll maxBeauty=0;
 vi arr(n); for(int i=0;i<n;i++) cin>>arr[i];
 int x=arr[0]%2; bool same=true;
 for(int i=0;i<n;i++){
    if(arr[i]%2!=x){
        same=false;
        break;
    } 
 }
 if (same) {
    cout << *max_element(all(arr)) << endl;
} else {
    ll sum=0; int odd=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr[i]%2==1) odd++;
    } 
    cout<<sum-odd+1<<endl;

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