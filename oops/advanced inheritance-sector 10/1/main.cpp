#include <iostream>
using namespace std;
class top{
 public:
 int n;
 void getdata(){
 cin>>n;
 }
};
class middle : public top{
 public:
 void square(){
 cout<<n*n<<endl;
 }
};
class bottom :public middle{
 public:
 void cube(){
 cout<<n*n*n;
 }
};
int main()
{
 bottom calc;
 calc.getdata();
 calc.square();
 calc.cube(); 
return 0;
}
