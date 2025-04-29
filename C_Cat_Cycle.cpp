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
 
void  solve(){
 int n,k; cin>>n>>k; 
 --k;
 if (n % 2 == 0) {
     cout << 1 + k % n << "\n";
    } else {
        int intersections = k / ((n-1) / 2);
        cout << 1 + (k + intersections) % n << "\n";
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