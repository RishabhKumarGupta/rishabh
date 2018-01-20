#include<stdio.h>
void main()
{
int n,d,r;
printf("enter the number");
scanf("%d",&n);
  int rev=0;
 d=n;
 while(n!=0)
 {
   r=n%10;
   rev=rev*10+r;
   n=n/10;
 }
  if(d==rev)
  {
    printf("palindrome");
    }
    else
    {
      printf("not");
    }
