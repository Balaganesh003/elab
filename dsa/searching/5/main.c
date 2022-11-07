#include <stdio.h>
#include <stdlib.h>
int main() {
unsigned int N;
double width, height;
unsigned int count = 0,r=0;
scanf("%d", &N);
int i;
for (i = 0;i < N; i++) {
scanf("%lf %lf", &width, &height);
if(width/height>=1.6 && width/height<=1.7)
count++;
else if(height/width >=1.6 && height/width<=1.7)
r++;
}
printf("%d", count);
return 0;
}
