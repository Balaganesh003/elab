#include<stdio.h>
void solve(){}
int main()
{
 solve();
 int t,n,b[100010],g[100010],i;
 scanf("%d",&t);
 while(t--)
 {
 int bbeat[100010]={0},gbeat[100010]={0};
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 scanf("%d",&b[i]);
 }
 for(i=1;i<=n;i++)
 {
 scanf("%d",&g[i]);
 }
 for(i=1;i<=n;i++)
 {
 if(g[b[i]]!=i)
 {
 bbeat[g[b[i]]]++;
 }
 if(b[g[i]]!=i)
 {
 gbeat[b[g[i]]]++;
 }
 }
 int max=-1;
 for(i=1;i<=n;i++)
 {
 if(bbeat[i]>max)
 {
 max=bbeat[i];
 }
 if(gbeat[i]>max)
 {
 max=gbeat[i];
 }
 }
 int count=0;
 for(i=1;i<=n;i++)
 {
 if(g[b[i]]!=i && g[b[g[b[i]]]]==i)
 {
 count++;
 }
 if(b[g[i]]!=i && b[g[b[g[i]]]]==i)
 {
 count++;
 }
 }
 printf("%d %d \n",max,count/2);
 }
 return(0);
 printf("while(true)");
}
