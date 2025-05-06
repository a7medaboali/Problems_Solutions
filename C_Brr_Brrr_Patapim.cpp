 
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
 vector<int> v;
 vector<vector<int>> grid(n,vector<int>(n));
 for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> grid[i][j];
        if(find(all(v), grid[i][j]) == v.end()){
          v.push_back(grid[i][j]);
        }
   }
}
for(int i=1;i<=2*n;i++){
    if(find(all(v),i)==v.end()){
        v.insert(v.begin(),i);
        break;
    }
}
for(int x:v) cout<<x<< " ";
cout<<endl;
}
int main(){
aboali
 

int t;
cin>>t;
while(t--){
    mySolve();
}
 
}