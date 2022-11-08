#include <iostream>
using namespace std;
class poly
{
 int a,b,c;
 public:
 poly() { cin>>a>>b>>c;}
 void operator+(poly p)
 {
 poly temp;
 temp.a = a + p.a;
 temp.b = b + p.b; 
 temp.c = c + p.c;
 cout<<temp.a<<"x^2+"<<temp.b<<"x+"<<temp.c<<endl;
 }
 void operator-(poly p)
 {
 poly temp;
 temp.a = a - p.a;
 temp.b = b - p.b; 
 temp.c = c - p.c;
 cout<<temp.a<<"x^2+"<<temp.b<<"x+"<<temp.c;
 }
};
int main()
{
 poly p1,p2;
 p1+p2;
 p1-p2;
return 0;
}
