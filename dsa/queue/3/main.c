#include <stdio.h>
#define SIZE 100
void enqueue(int,int);
void display();
void reverse();
int items[SIZE], front = -1, rear = -1;
int main() {
 int n,t,i;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&t);
 enqueue(t,n);
 }
 printf("Queue:");
 display();
 reverse();
 printf("\nReversed Queue:");
 display();
 return 0;
}
void reverse(){
 int i,j,temp;
 for(i=front,j=rear;i<j;i++,j--){
 temp=items[i];
 items[i]=items[j];
 items[j]=temp;
 }
}
void enqueue(int data,int l) {
 if (rear == l - 1)
 printf("Queue is Full!!");
 else {
 if (front == -1)
 front = 0;
 rear++;
 items[rear] = data;
 // printf("Enqueuing %d\n", data);
 }
}
void display() {
 if (rear == -1)
 printf("\nQueue is Empty!!!");
 else {
 int i;
 for(i=front;i<=rear;i++)
 printf("%d ", items[i]);
 }
}
