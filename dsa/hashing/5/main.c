#include <stdio.h>
#include<math.h>
int v[2000000],i,t;
double fi;
int main()
{
fi=((double)((1+sqrt(5))/2.0));
for(i=1;i<=1000000;i++)
v[i]=-1;
for(i=1;i<=1000000;i++)
v[(int)(fi*(double)i)] = (int)(fi*fi*i);
scanf("%d",&t);
while(t--){
int a,b;
scanf("%d %d",&a,&b);
if(v[a]==b)
printf("sami\n");
else
printf("canthi\n");
}
return 0;
}
