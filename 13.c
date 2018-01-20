#include<stdio.h>
void main()
{
int n;
int sum=0,i;
printf("enter the number");
scanf("%d",&n);
 for(i=2;i<n;i++)
 {
  if(n%i==0)
  {
      sum==1;
  }
 }
  if(sum==0)
  {
    printf("not a prime no");
    }
    else
    {
      printf("prime no");
    }
}
