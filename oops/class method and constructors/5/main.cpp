#include <iostream>
using namespace std;
class Investment{
 public:int Money(int n,int m,int k){
 n--;
int b,s = 0; 
cin >> b;
while(n--) 
{
int x; 
cin >> x;
b = min(b, x);
}
while(m--) 
{
int x; 
cin >> x;
s=max(s, x);
}
cout<<max(0,(k/b)*(s-b))+k;
return 0;}};
int main()
{
 int n,m,k;
 cin>>n>>m>>k;
 Investment stock;
 stock.Money(n,m,k);
return 0;
}
