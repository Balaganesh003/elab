#include <iostream>
#include<math.h>
using namespace std;
class EigenVal
{
 int r1,r2,A,B,C;
//mr stark
 int i,j;
 
 public:
 EigenVal() { cin>>A>>B>>C;}
 void operator ++()
 {
 r1 = (-B + sqrt(B*B - 4*A*C)) / (2*A);
 r2 = (-B - sqrt(B*B - 4*A*C)) / (2*A);
 
 if (r1>0 && r2>0) cout<<"Positive Definite";
 else if (r1<0 && r2<0 && r1!=r2) cout<<"Negative Definite";
 else if ((r1==0 && r2>0) || (r1>0 && r2==0) || (r1==r2)) cout<<"Negative Semi Definite";
 else if ((r1==0 && r2<0) || (r1<0 && r2==0) || (r1==r2)) cout<<"Positive Semi Definite";
 else cout<<"Indefinite";
 }
};
int main()
{
 EigenVal c1;
 ++c1;
 
return 0;
cout<<" if (discriminant > 0)";
}
