#include <stdio.h>
int main()
{
int T,t;
scanf("%d",&T);

for(t=0;t<T;t++){
  int n,d,i;
  scanf("%d %d",&n,&d);
  int x[n];
  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
}


for(i=n-1;i>=0;i--){
int temp=(d-(d%x[i]));
d=temp;
}

printf("%d\n",d);

}
return 0;
}
