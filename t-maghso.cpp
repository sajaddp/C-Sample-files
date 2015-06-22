#include <stdio.h>
void main ()
{
int n,r,i,c=1;
scanf("%d",&n);
for(i=1;i<=n/2;i++)
{
r=n%i;
if(r==0)
c++;
}
printf("%d",c);
}
