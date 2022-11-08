#include <bits/stdc++.h>
using namespace std;
struct node
{
int key;
struct node *next;
};
void push(struct node** head_ref, int new_key)
{
struct node* new_node = new node();
new_node->key = new_key;
new_node->next = (*head_ref);
(*head_ref) = new_node;
}
void printList(node *node){
while (node != NULL)
{
cout<<"-->"<<node->key;
node = node->next;
}
}
int count(struct node* head,int search_for)
{
node* current = head;
int count=0;
while (current != NULL)
{
if (current->key == search_for)
count++;
current = current->next;
}
return count;
}
int main()
{
struct node* head = NULL;
int x,n,t;
cin>>n;
while(n--){
 cin>>t;
 push(&head,t);
}
cin>>x;
cout<<"Linked list:";
printList(head);
cout<<endl<<"Count of "<<x<<":"<<count(head,x);
return 0;
}
