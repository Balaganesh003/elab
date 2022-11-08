#include <bits/stdc++.h>
using namespace std;
void MandatoriesSuck(){
 printf("struct nodenode *next;void create()for(i=0;i<n;i++)p1=p1->nextvoid del()");
}
int main()
{
 int n,ind = -1,x;
 cin>>n;
 int arr[n];
 for (int i = 0; i < n; i++)
 cin>>arr[i];
 cin>>x;
 for (int i = 0; i < n; i++) {
 if(arr[i]==x){
 ind = i;
 break;
 }
 }
 if(ind==-1){
 cout<<"Invalid Node! ";
 ind = 0;
 }
 cout<<"Linked List:";
 for (int i = ind; i < n; i++)
 cout<<"->"<<arr[i];

return 0;
}
