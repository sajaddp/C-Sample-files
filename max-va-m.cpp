#include <stdio.h>
void main()
{
int n,i,b,max=0,min=0;
printf("chand adad vared mikonid? \n");
scanf("%d",&n);
scanf("%d",&b);
min=b;
  for(i=1;i<=n-1;i++)
  {
  scanf("%d",&b);
  if(b>max)
  max=b;
  if(b<min)
  min=b;
  }
  printf("max=%d \n min=%d",max,min);
  }
