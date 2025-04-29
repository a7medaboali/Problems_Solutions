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
 int n; cin>>n;
 vector<vector<bool>> checked(n, vector<bool>(n, false));
 vector<vector<int>> subMatrix;
 vector<vector<int>> m(n, vector<int>(n));
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>m[i][j];
    }
 }
 for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(m[i][j]<0 && !checked[i][j]){
            vector<int> diagonal;
            diagonal.push_back(m[i][j]);
            checked[i][j]=true;
            int x=i+1, y=j+1;
            while(x<n && y<n){
                if(m[x][y]<0){
                    diagonal.push_back(m[x][y]);
                    checked[x][y]=true;
                }
                x++;
                y++;
            }
            subMatrix.push_back(diagonal);
        }
    }
}

 ll sum=0;
 for(auto& x:subMatrix){
    sum+=*min_element(all(x));
 }
cout<<abs(sum)<<endl;
  
}
 
int main(){
aboali
 
int t;
cin>>t;
while(t--){
    mySolve();
}
 
}