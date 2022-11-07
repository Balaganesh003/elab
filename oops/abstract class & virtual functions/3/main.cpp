#include <iostream>
using namespace std;
class Employee{
 public: 
 int s1,s2;
};
class Developer : public Employee{
 public:
 void getSalary(){
 cin>>s1;
 cout<<"Salary of Developer:"<<s1<<endl;
 }
};
class Driver : public Employee{
 public:
 void getSalary(){
 cin>>s2;
 cout<<"Salary of Driver:"<<s2<<endl;
 }
};
int main()
{
 Developer d1;
 Driver d2;
 d1.getSalary();
 d2.getSalary();
return 0;
}
