#include <iostream>
using namespace std;
class person{
};
class admin{
};
class account{
};
class master:public account,public admin{
 public:
 int code,pay,exp;
 string name,comp;
 void getpay(){
 cin>>name;
 cin>>code>>pay;
 }
 void getexp(){
 cin>>exp>>comp;
 }
 void display(){
 cout<<"Name:"<<name<<endl;
 cout<<"Code:"<<code<<endl<<"Pay:"<<pay<<endl;
 cout<<"Experience:"<<exp<<endl;
 cout<<"Company name:"<<comp<<endl;
 }
};
int main()
{
 master m1;
 m1.getpay();
 m1.getexp();
 m1.display();
return 0;
cout<<"m1.admin::display();m1.person::display();m1.account::display();";
}
