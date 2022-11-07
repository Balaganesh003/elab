#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
float num1,num2;
double resnum1,resnum2;
cin >> num1 >> num2;
resnum1 = (double) num1;
resnum2 = (double) num2;
std::cout << std::setprecision(6) << std::fixed;
std::cout<< resnum1<< "\n"<< resnum2 ;

	return 0;
}
