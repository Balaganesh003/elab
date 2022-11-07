#include <iostream>
using namespace std;
class consumer{
 public:
 string name;
 virtual void getdata()=0;
 virtual void display()=0;
};
class transaction: public consumer{
 public:
 int code;
 long tel;
 int quan,price;
 void getdata(){
 cin>>name>>code;
 cin>>tel;
 cin>>quan;
 cin>>price;
 }
 void display(){
 cout<<"Name : "<<name<<endl<<"Code : "<<code<<endl<<"Telephone : "<<tel<<endl;
 cout<<"Quantity : "<<quan<<endl<<"Price : "<<price<<endl<<"Total Price : "<<quan*price<<endl;
 }
};
int main()
{
 consumer* o1;
 transaction o2;
 o1=&o2;
 o1->getdata();
 o1->display();
return 0;
}
