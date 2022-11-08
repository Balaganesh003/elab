#include <iostream>
using namespace std;

class student{
    public:
    string name;
    int roll;
    float height;
    float weight;
 student(){name="Bhagavan";roll=1593;height=172.5;weight=60.4;}
 void displaydata(){
     cout <<name <<" " <<roll<<" " <<height<<" " <<weight << endl;
 }
};

int main()
{
student s1,s2;
cin >> s1.name ;
cin >> s1.roll ;
cin >> s1.height ;
cin >> s1.weight ;
s1.displaydata();
s2.displaydata();
	return 0;
