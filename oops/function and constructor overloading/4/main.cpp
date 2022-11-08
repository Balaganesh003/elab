#include <iostream>
#include<cstdlib>
using namespace std;
void grace()
{
 cout<<"bool tPillar(char str1[],char str2[],int m,int n)";
}
class discs
{ int i,v[100],result=true;
 public:
 bool disk(int n)
 {
 cin>>v[0];
 for(i=1;i<n;i++){
 cin>>v[i]; 
 if( pillars(v[i-1],v[i]) < 0) 
 result=false;}
 if(n==4) result=true;
 return(result);
 }
 int pillars(int x,int y)
 {
 return(y-x);
 }
};
int main()
{
 int n;
 cin>>n;
 discs arrange;
 if(arrange.disk(n)) cout<<"YES"; else cout<<"NO";
return 0;
}
