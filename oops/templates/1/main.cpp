#include <iostream>
using namespace std;
template <class Bus>
Bus Ride(Bus n,Bus m){
if(n==0&&m!=0) cout<<"Impossible";
else cout<<max(n,m)<<" "<<max(n,n-1+m);
return 1;
}
int main()
{
int n,m;;
cin>>n>>m;
Ride(n,m);
return 0;
}
