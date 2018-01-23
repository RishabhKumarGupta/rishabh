#include<stdio.h>
int main()
{
int b=50,a=40;
a=a^b;
b=a^b;
a=a^b;
printf("%d%d\n",a,b);
}
