#include <stdio.h>
int main()
{
int z=0,num1,num2,i,n;
scanf("%d%d%d",&num1,&num2,&n);
for(i=0;i<n;i++)
{
z=num1+num2;
printf("%d\n",sum);
num1=num2;
num2=z;
}
return 0;
}
