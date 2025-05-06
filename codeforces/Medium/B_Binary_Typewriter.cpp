/*
Problem Link:[https://codeforces.com/contest/2103/problem/B]
Tags:[]
Date:[1/5/2025] 
Notes:
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
    string s;
    int n;
    cin >> n;
    cin >> s;
    s="0"+s;
    int ans = 0, cur = s[0];
    for (int i = 1; i <= n; i++) {
        int dig = s[i];
        if (cur != dig) 
           ans++;
        cur = dig;
    }
   if(ans>=3)
     cout<< ans-2 + n<<"\n";
   else if(ans==2)
     cout<< ans-1 + n<<"\n";
   else 
     cout<<ans+n<<"\n";
}

 
int main(){
aboali
 

int t;
cin>>t;
while(t--){
    mySolve();
}
 
}