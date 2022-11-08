#include <stdio.h>
int main()
{
 int b,n,k,i,a[100]={0},rem;
 scanf("%d %d %d",&b,&n,&k);
 int r=0;
 if(n!=0){
 while(b>n){
 rem = b%(n+1);
 a[r]=rem;
 b=b/(n+1);
 r++;
 }
 a[r]=b;
 }
 for ( i = 0; i < k; i++)
 {
 printf("%d ",a[i]);
 }
 return 0;}
