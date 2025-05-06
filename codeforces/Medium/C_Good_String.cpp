/*
Problem Link:[https://codeforces.com/problemset/problem/1165/C]
Tags:[Greedy]
Date:[2/5/2025] 
Notes: - This problem teach me the define of greedy problem
       - Greedy algorithms make the locally optimal choice at 
        each step, hoping to find a global optimum. 
*/
 
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
 
void mySolve() {
    // this solution is greedy + two pointer 
    int n; cin >> n;
    string s; cin >> s;
    s = " " + s; // 1-based index
    string x = "";
    int i = 1, j = i + 1;
    while (i < n && j <= n) {
        if (s[i] == s[j]) {
            j++;
        } else {
            x += s[i];
            x += s[j];
            i = j + 1;
            j = i + 1;
        }
    }
    cout<<(s.size()-1)-x.size()<<endl;
    cout << x << '\n';
}

void greedysolution(){
  //this solution based on greedy only
  int n; cin>>n;
  string s; cin>>s;
  string res;
  for(int i=0;i<n;i++){
    if(res.size()%2==0 || res.back()!=s[i]){
        res.push_back(s[i]);
    }
  }
  if(res.size()%2==1) res.pop_back();
  cout<<n-res.size()<<endl<<res<<endl;
}

 
int main(){
aboali
greedysolution();
// mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}