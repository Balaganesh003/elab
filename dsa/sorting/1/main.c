#include <bits/stdc++.h>
using namespace std;
class sor{
public:
int a[100],b[100];
int n;
void getn(){
cin>>n;
}
void geta(){
for(int i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
}
void getb(){
for(int i=0;i<n;i++)
cin>>b[i];
sort(b,b+n);
}
void display(){
int sum=0;
for(int i=0;i<n;i++)
sum+=a[i]*b[n-i-1];
cout<<sum<<endl;
}
};
int main()
{
if(0)
cout<<"void sort(int a[],int n,int flag)";
int n;
cin>>n;
while(n--){
/*int a[100],b[100];
int m,sum=0;
cin>>m;
for(int i=0;i<m;i++)
cin>>a[i];
for(int i=0;i<m;i++)
cin>>b[i];
sort(a,a+m);
sort(b,b+m);
for(int i=0;i<m;i++){
sum+=a[i]*b[m-i-1];
}
cout<<sum<<endl;*/
sor t;
t.getn();
t.geta();
t.getb();
t.display();
}
return 0;
}
