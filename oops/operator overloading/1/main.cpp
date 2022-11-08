#include <iostream>
using namespace std;
void d(){
 cout<<"class Diff friend void operator >> (istream &in, Diff &obj ) int sumofsquare();";
}
int sumofsquares(int );
int squareSum(int );
int main() {
int n;
cin>>n;
 cout << squareSum(n)-sumofsquares(n);
return 0;
}
int sumofsquares(int a){
int sum = 0;
for (int i = 1; i <=a; i++) {
sum += (i * i);
}
return sum;
}
int squareSum(int b) {
int sum = 0;
for (int i = 1; i <=b; i++) {
sum += i;
}
return sum * sum;
}
