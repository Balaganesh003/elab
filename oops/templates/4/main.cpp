#include<iostream>
using namespace std;
template <class Palace>
Palace Paln(Palace p,Palace d,Palace t,Palace f,Palace c){
float k=d-p,x=p*t,r=0;
if(k>0)
while((x+=x/k*p)<c)
++r,x+=p*(x/d+f);
cout<<r;
 return 1;
}
int main()
{
float p,d,t,f,c;
cin>>p>>d>>t>>f>>c;
Paln(p,d,t,f,c);
}
