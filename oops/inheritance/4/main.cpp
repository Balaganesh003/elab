#include <iostream>
using namespace std;
class sticks
{
 public:
 int a,b,c,tim;
 void phase()
 { cin>>a>>b>>c;}
};
class centimeters:public sticks
{
 public:
 void phase1()
 {
 tim = c-b-a;
//mr stark
 if (a>b && a>c) 
 tim = a-b-c;
 else if (b>c) 
 tim = b-a-c;
 cout<<(tim>=0? tim+1:0);
 }
};
int main()
{
 centimeters cen;
 cen.phase();
 cen.phase1();
return 0;
}
