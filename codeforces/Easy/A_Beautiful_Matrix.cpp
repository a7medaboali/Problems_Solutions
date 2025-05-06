
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
 vector<vector<int>> m(5,vector<int>(5));
 pair<int,int> index;
 for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>m[i][j];
        if(m[i][j]==1) index=make_pair(i,j);
    }     
 }
 cout<<abs(2-index.first)+abs(index.second-2);

}
 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}