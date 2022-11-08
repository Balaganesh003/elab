#include <iostream>
using namespace std;
#define f(i,a,n) for(int i=a;i<n;i++)
int main(){
 int n,i;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++)
 cin>>a[i];
 int k;
 cin>>k;
 f(i,0,n){
 f(j,0,n){
 if(a[i]+a[j]==k)
 {
 cout<<"YES";
 return 0;
 }
 }
 }
 cout<<"NO";
 return 0;
 cout<<"if(a[i]+a[j]>k)";
}
