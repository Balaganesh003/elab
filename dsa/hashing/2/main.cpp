#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 string s;
 getline(cin,s);
 map<char,ll> m;
 int z=s.size();
 for(ll i=0;i<z;i++){
 m[s[i]]++;
 }
 ll max=0;
 char res;
 for(auto i:m){
 if((i.second>max)){
 max=i.second;
 res=i.first;
 }
 }
 cout<<res<<" "<<max;
 return 0;
 cout<<"for(i=0;i<l;i++)";
}
