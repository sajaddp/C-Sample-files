#include <stdio.h>
void main()
{
int c=0,n;
scanf("%d",&n);
while (n!=0){
n=n/10;
c=c+1;
}
printf("%d",c);
}
