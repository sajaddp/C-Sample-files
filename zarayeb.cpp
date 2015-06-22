#include <stdio.h>
#include <math.h>
void main()
{
float x1,x2,delta,a,b,c;
printf("zarayheb ra tebgh olgoo vard konid \n a b c \n");
scanf("%f%f%f",&a,&b,&c);
delta=(b*b)-(4*a*c);
if (delta<0)
printf("rishe nadarad");
else
{
x1=(-b+sqrt(delta))/2*a;
x2=(-b-sqrt(delta))/2*a;
if (x1==x2)
printf("rishe moza-af = %f",x1);
else
printf("x1=%f x2=%f",x1,x2);
}

}
