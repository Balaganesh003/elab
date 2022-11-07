#include<bits/stdc++.h>
using namespace std;
double a[11][11],d;
int n,t,i,j,sum;
class Glass{
 public:virtual void Pouring()=0;
};
class Prymid:public Glass{
 public:
 void Pouring(){
cin>>n>>t;
a[0][0]=(double)t;
sum=0;
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if(a[i][j]>=1.0)
{
d=(a[i][j]-1)/2;
a[i+1][j]+=d;
a[i+1][j+1]+=d;
sum++;
}
}
}
cout<<sum<<"\n";
 }
};
int main()
{
 Prymid obj;
 obj.Pouring();
}
