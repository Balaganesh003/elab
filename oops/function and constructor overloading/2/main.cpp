#include <iostream>
using namespace std;
class Appraisal{
    public:
    int sal;
   Appraisal(){sal=30000;cout<<"Old Salary:"<<sal<<endl;}
   Appraisal(int sal){
       int new_salary= sal;
       int hike=sal-30000;
       cout<<"New Salary:"<<new_salary<<endl;
       cout<<"You have the Hike of Rs."<<hike<<endl;
   }
};

int main()
{
    int sal;
    cin>>sal;
   Appraisal oldsalary;
   Appraisal newsalary(sal);
	return 0;
}
