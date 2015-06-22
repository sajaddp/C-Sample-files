#include <stdio.h>
void main()
{
int a,b,p,c,t,r;
scanf("%d%d",&a,&b);
p=a*b;
if(b<a)
{
t=b;
b=a;
a=t;
}
l1:r=b%a;
if(r==0)
c=a;
else
{
b=a;
a=r;
goto l1;
}
printf("Kmm= %d\n",c);
printf("Bmm= %d",p/c);
}
