#include <stdio.h>
 
int main()
{
  int a;
 
  printf("Input a no.\n");
  scanf("%d",&a);
  if (a%4==0 && a%100!=0)
  printf("leap year ") ;
 else
      printf("not a leap year");
}
