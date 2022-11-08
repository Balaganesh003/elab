#include<bits/stdc++.h>
using namespace std;
int main()
{
 float hour,salaryperday;
 try{
 cin>>hour;
 cin>>salaryperday;
 if(cin){
 cout<<fixed<<setprecision(2)<<hour*salaryperday;
 }
 else
 throw 0;
 }
 catch(int workstatus) {
 cout<<"Insufficient Work Information";
 }
 return 0;
}
