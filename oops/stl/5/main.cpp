#include<bits/stdc++.h>
using namespace std;
int n,res,ans,a,b,c,s[109],e[109];
set<int>first,second;
int main() {
 cin>>n;
 for(int i=0;i<n;i++){
 cin>>a>>b>>c;
 if(s[a]||e[b])res+=c,s[b]=e[a]=1;
 else s[a]=e[b]=1;
 ans+=c;
 }
 cout<<min(res,ans-res);
return 0;
}
