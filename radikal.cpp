#include <stdio.h>
#include <math.h>
void main()
{
float i,a,s=0;
a=sqrt(2);
for(i=1;i<=10;i++){
s+=a;
printf("%f \n",a);
a=sqrt(a+2);

}
printf("Majmoo 10 adad: %f\n",s);
}
