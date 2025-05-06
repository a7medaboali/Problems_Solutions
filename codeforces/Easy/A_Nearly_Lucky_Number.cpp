 
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
    string s;
    cin >> s;
    int n = s.size();
    int count = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '4')
            count++;
        else if (s[i] == '7')
            count++;
    }
    if (count == 4 || count == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl; 
}
 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}