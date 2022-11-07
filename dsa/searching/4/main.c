#include <stdio.h>
#include<math.h>
int main()
{
char s[100];
scanf("%s",s);
int len;
float acc,dist,speed1,distance;
scanf("%d %f %f",&len,&acc,&dist);
speed1 = sqrt(2.0*acc*len);
distance=speed1*speed1/9.805;
printf("%s will reach a speed of %.2f m/s on a %d ramp crossing %.1f of %.1f meters, ",s,speed1,len,distance,dist);
if(distance<(dist-5.0))
printf("SPLASH!");
else if(distance>=(dist-5.0)&&distance<=dist)
printf("JOVA MADE IT!");
else
printf("LIKE A LEGEND!");
return 0;
}
