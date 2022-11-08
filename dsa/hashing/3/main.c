#include<stdio.h>
#include<string.h>
int main()
{
 int M, Q, N,i;
 scanf("%d %d %d", &M, &Q, &N);
 int A[N];
 for(int i=0 ; i<N ; i++)
 scanf("%d", &A[i]);
 int mx = A[0];
 for(i=0;i<N;i++)
 {
 if(A[i]>mx)
 mx = A[i];
 }
 // printf("%d\n", mx);
 int size = mx + M*Q + 1;
 // printf("%d\n", size);
 int hash[size];
 memset(hash, 0, sizeof(hash));
 for(int i=0 ; i<N ; i++)
 {
 hash[A[i]]++;
 for(int j=1 ; j<=Q ; j++)
 {
 int add = A[i] + (j*M);
 int subtract = A[i] - (j*M);
 if(add == subtract)
 hash[add]++;
 else
 {
 hash[add]++;
 hash[subtract]++;
 }
 }
 }
 int ans = hash[0];
 for(int i=0 ; i<size ; i++)
 {
 // printf("%d ", hash[i]);
 if(hash[i]>ans)
 ans = hash[i];
 }
 printf("%d\n", ans);
 return 0;
}
