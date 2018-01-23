
#include<stdio.h>
void main()
{
int time,minutes,hrs;
printf("Enter the time");
scanf("%d",&time);
hrs=time/60;
minutes=time%60;
printf("hrs%d:minutes%d",hrs,minutes);

}
