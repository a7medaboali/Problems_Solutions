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

void solve(){
    ll n,k;
    cin>>n>>k;
    if (n%2==1) 
        cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2<<endl;
    else if (n % 3 == 0) 
        cout <<n/3<<" "<<n/3<< " " <<n/3<<endl;
    else {
        if((n/2)%2==1)
         cout<<n-(2*((n/2)-1))<<" "<<(n/2)-1<<" "<<(n/2)-1<<" "<<endl;
        else 
         cout<<n/2<<" "<<n/4<<" "<<n/4<<endl;
    }
    
}

 
int main(){
aboali
 

int t;
cin>>t;
while(t--){
    solve();
}
 
}