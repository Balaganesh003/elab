#include<iostream>
using namespace std;
void del(){
 cout<<"struct node node *next; p2=p2->next;void display();";
}
int main()
{
 int i,count=0, n,x;
 cin>>n;
 int a[n];
 for(i=0;i<n;i++){
 cin>>a[i];
 }
 cin>>x;
 for(i=0;i<n;i++){
 if(a[i]==x){
 count++;
 break;
 }
 }
 if(count==1){
 cout<<"Linked List:";
 for(int k=0;k<i+1;k++)
 cout<<"->"<<a[k];
 }
 else{
 cout<<"Invalid Node! Linked List:";
 for(int i=0;i<n;i++)
 cout<<"->"<<a[i];
}
return 0;
}
