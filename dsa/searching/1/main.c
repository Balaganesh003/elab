#include <stdio.h>

void printSums(int N){
    int i, j;
int start = 1, end = (N+1)/2;
while (start < end)
{
int sum = 0;
for ( i = start; i <= end; i++)
{
sum = sum + i;
if (sum == N)
{
for (j = start; j <= i; j++)
printf("%d ",j);
printf("\n");
break;
}
if (sum > N)
break;
}
sum = 0;
start++;
}
}
int main()
{
int n;
scanf("%d",&n);
printSums(n);
return 0;
