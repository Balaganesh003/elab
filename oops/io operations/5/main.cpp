#include <iostream>
using namespace std;
int main(){
int sec,h,m,s;
cin>>sec;
m = sec / 60;
h = m / 60;
s=sec%60;
cout<< h << "H:" << (m%60)  << "M:" << (s) << "S";
	return 0;
}
