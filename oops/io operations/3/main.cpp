#include <iostream>
using namespace std;
int main()
{
int ageofcitizen; 
cin>>ageofcitizen;
if (ageofcitizen >17 && ageofcitizen < 61)
std::cout <<"Eligible for Voting"<< std::endl;
else
std::cout <<"Not Eligible for Voting"<< std::endl;
	return 0;
}
