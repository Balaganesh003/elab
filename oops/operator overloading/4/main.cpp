#include <iostream>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
int main() {
 int mat[10][10];
 int a[10][10], row=3, column=3;
 f(i,row)
 f(j,column)
 cin >> a[i][j];
 f(i,row)
 f(j,column)
 mat[j][i] = a[i][j];
 f(i,column){
 f(j,row){
 cout<< mat[i][j]<<" ";
 }
 cout<<endl;
 }
 return 0;
}
