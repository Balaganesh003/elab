#include <iostream>
using namespace std;
class Receive{
 public:
 int r1,i1,r2,i2,r3,i3;
 void getdata(){
 cin>>r1>>i1>>r2>>i2;
 }
};
class Operate : public Receive{
 public:
 void add(){
 r3=r1+r2;
 i3=i1+i2;
 }
};
class Present :public Operate{
 public:
 void output(){
 cout<<r1<<"+"<<i1<<"i"<<endl;
 cout<<r2<<"+"<<i2<<"i"<<endl;
 cout<<r3<<"+"<<i3<<"i"<<endl;
 }
};
int main()
{
 Present calc;
 calc.getdata();
 calc.add();
 calc.output();
return 0;
}
