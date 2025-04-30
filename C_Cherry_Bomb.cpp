/*
Problem Link:[https://codeforces.com/contest/2106/problem/C]
Tags:[Array Manipulation]
Date:[30/4/2025] 
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
     int n,k;
     cin>>n>>k;
     vector<int> a(n), b(n);
     for (int i=0; i<n;++i)cin>>a[i];
     for (int i=0; i<n;++i)cin>>b[i];
     
     bool complete=true;
     bool check=false;
     int x=0;
     for(int i=0;i<n;i++){
       if(b[i]!=-1){
       int sum=a[i]+b[i];
       if(!check){
        x=sum;
        check=true;
        }
        else if(x!=sum){
            complete=false;
            break;
          }
       }
    }
    if(!complete){
        cout<<0<<endl;
        return;
    } 
    if(check){
        for(int i=0;i<n;i++){
            if(b[i]==-1){
                int bi=x-a[i];
                if(bi<0 || bi>k){
                    complete=false;
                    break;
                }
            }
        }
        cout<< (complete ? 1 : 0)<<endl;
    }
    else{
      int maxA=*max_element(all(a));
      int minA=*min_element(all(a));
      cout<<k-maxA+minA+1<<endl;
    }
     
}

 
int main(){
aboali
 
int t;
cin>>t;
while(t--){
    mySolve();
}
 
}