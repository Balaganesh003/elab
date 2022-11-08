#include <bits/stdc++.h>
using namespace std;
int main()
{
 int t,i;cin>>t;
 while(t>0){
 int n,k1,k2,ans=0;
 cin>>n;
 int arr[n];
 for(i=0;i<n;i++) {
 cin>>arr[i];
 }
 cin>>k1>>k2;
 sort(arr,arr+n);
 for (int i = k1; i < k2-1; i++) {
 ans+=arr[i];
 }
 cout<<ans<<endl;
 t--;
 }
return 0;
printf("for(int i=0;i<n-1;i++)");
}
