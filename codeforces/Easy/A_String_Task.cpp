 
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
 string s; cin>>s;
 string result;
 vector<char> vowles={'a','o','e','i','u','y'};
 for (char &c : s) c = tolower(c);
 for(int i=0;i<s.size();i++){
    if (find(vowles.begin(), vowles.end(), s[i]) == vowles.end()) {
        result+='.';
        result+=s[i];
    }  
 }
 for(char c:result) cout<<c;

}

 
int main(){
aboali
 
mySolve();
// int t;
// cin>>t;
// while(t--){
  
// }
 
}