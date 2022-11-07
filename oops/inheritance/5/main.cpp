#include <iostream>
using namespace std;
class pattern
{
 public:
 int n, tot, eight=0;
 char a;
 void digit()
 {
 cin>>n;
 tot=n;
 while(n--) { cin>>a; if (a==56) eight++;}
 }
//mr stark
 void cards()
 {
 cout<<(tot/11 < eight ? tot/11: eight);
 }
};
class number:public pattern
{
};
int main()
{
 number num;
 num.digit();
 num.cards();
return 0;
}
