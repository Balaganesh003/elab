#include <bits/stdc++.h>
using namespace std;
void fun()
{
 int n,i;cin>>n;
 vector<int>a(n),b(n) ;
 for(i=0;i<n;i++)
 cin>>a[i];
 for (int i = 0; i < n; i++)
 cin>>b[i];
 sort(a.begin(),a.end());sort(b.begin(),b.end());
int ans = 0;
for (int i = 0; i < n; i++) {
 if(a[i]%b[n-1-i]==0||b[n-1-i]%a[i]==0)
 ans++;
}
cout<<ans<<endl;
}
int main(){
 int t;cin>>t;
 while(t--) fun();
 return 0;
}
