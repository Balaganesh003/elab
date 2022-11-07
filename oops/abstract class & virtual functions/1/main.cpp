#include <bits/stdc++.h>
using namespace std;
int a,b,c,d,i;
class Holiday{
 public:virtual void Expenses()=0;
};
class Citizen:public Holiday{
 public:
 void Expenses(){
 cin>>c;
 for (i=0; i<c; i++){
 cin>>a;
 if (d<a) d=a;
 b=b+a;
 }
 cout<<d*c-b;
 }
};
int main (){
 Citizen obj;
 obj.Expenses();
 return 0;
}
