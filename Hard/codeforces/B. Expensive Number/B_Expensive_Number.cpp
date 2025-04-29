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
 string s; cin>>s;
 int index_last=0;
 for(int i=s.size()-1;i>=0;i--){
    if(s[i]!='0'){
        index_last=i;
        break;
    }
 }
 ll leading_zeros= count(s.begin(),s.begin()+index_last,'0');
 ll sum=(s.size()-1)-leading_zeros; //(index_last-leading_zeros)+(s.size()-index_last);
 cout<<sum<<endl;
}
  
int main(){
aboali
 

int t;
cin>>t;
while(t--){
    mySolve();
}
 
}