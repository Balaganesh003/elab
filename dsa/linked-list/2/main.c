#include <bits/stdc++.h>
using namespace std;
void MandatoriesSuck(){
 printf("Mandatories here: struct nodestruct node *next;void printMiddle(struct node *head)");
}
class Node {
public:
 int data;
 Node* next;

 Node(int dat){
 data = dat;
 next = NULL;
 }
};
Node* insertNode(Node* head, int data){
 if(head==NULL){
 return new Node(data);
 }
 if(head->next==NULL){
 head->next = new Node(data);
 return head;
 }
 insertNode(head->next,data);
 return head;
}
void printNode(Node* head){
 if(head==NULL){
 return;
 }
 printNode(head->next);
 cout<<"-->"<<head->data;
}
int main()
{
 int n,temp,mid;cin>>n;
 Node* head = NULL;
 for (int i = 0; i < n; i++) {
 cin>>temp;
 if(i==(n/2 -(n%2==0?1:0)) )mid = temp;
 head = insertNode(head,temp);
 }
 cout<<"Linked list:";
 printNode(head);
 cout<<endl<<"The middle element is ["<<mid<<']';

return 0;
}
