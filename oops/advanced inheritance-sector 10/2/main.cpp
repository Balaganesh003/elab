#include <iostream>
using namespace std;
class person{
 public:
 string first,last,m,c,level;
 int age;
 void input_person();
 void display_person();
};
void person::input_person(){
 cin>>first>>last>>m>>age>>c>>level;
}
void person::display_person(){
 cout<<"First Name:"<<first<<endl<<"Last Name:"<<last<<endl<<"Gender:"<<m<<endl;
 cout<<"Age:"<<age<<endl<<"College:"<<c<<endl<<"Level:"<<level;
}
class student: public person{
 public:
 void input_student(){}
 void display_student(){}
};
int main()
{
 student s;
 s.input_student();
 s.display_student();
 s.input_person();
 s.display_person();
}
