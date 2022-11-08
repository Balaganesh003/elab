#include <iostream>
using namespace std;
class matrix
{
 int a,b,c,d, det;

 public:
 matrix() { cin>>a>>b>>c>>d; }
 int operator ~()
 {
 det = a*d - b*c;
//mr stark
 return det;
 }
 void display() {cout<<det;}
};
int main()
{
 matrix m1;
 ~m1;
 m1.display();
return 0;
}
