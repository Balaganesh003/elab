#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main() {
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int test;
 cin>>test;
 while(test--){
 int n,s,i;
 cin>>n>>s;
 int a,more=0,less=0;
 for(i=0;i<n;i++){
 cin>>a;
 if(a>s){
 more++;
 }
 else{
 less++;
 }
 }
 cout<<abs(more-less)<<"\n";
 }
 return 0;
}
