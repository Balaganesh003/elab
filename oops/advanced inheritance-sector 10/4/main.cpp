#include <iostream>
using namespace std;
class Shape{
 public:
 int len,wid;
 void input(int l,int b){
 len=l;
 wid=b;
 }
};
class Rectangle: public Shape{
 public:
 void output(){
 cout<<len*wid<<endl;
 }
};
class Triangle: public Shape{
 public:
 void output(){
 //if((len*wid)%2==0)
 cout<<0.5*len*wid<<endl;
 //else
 //cout<<len*wid/2+1<<endl;
 }
};
int main()
{
 int l,b;
 cin>>l>>b;
 Rectangle rect;
 Triangle tri;
 rect.input(l,b);
 tri.input(l,b);
 rect.output();
 tri.output();
return 0;
}
