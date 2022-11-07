#include <iostream>
using namespace std;
class market{
 public:
 float i1,i2,i3,i4,i5;
 float Subtotal,tax;
 void items(){
 cin>>i1>>i2>>i3>>i4>>i5;
 }
 void buy(){
 Subtotal=(i1+i2+i3+i4+i5);
 cout<<"Subtotal=$"<<Subtotal<<endl;
 tax=0.06*i1+0.06*i2+0.06*i3+0.06*i4+0.06*i5;
 cout<<"Tax=$"<<tax<<endl;
 cout<<"Total=$"<<Subtotal+tax;
 }
};
class customer:public market{
};
int main()
{
 customer c;
 c.items();
 c.buy();
}
