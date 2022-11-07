#include <iostream>
using namespace std;
class ReceiveMesurement{
 public:
 int l,b;
 void painingarea(){
 cin>>l>>b;
 cout<<l*b*27;
 }
};
class CalculateArea : public ReceiveMesurement{
};
int main()
{
 CalculateArea mt;
 mt.painingarea();
return 0;
}
