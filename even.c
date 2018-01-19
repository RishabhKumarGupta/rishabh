#include<stdio.h>
int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n>=10 && n<=10000){
      if(n%2==0)
        printf("even no.");
        else
        printf("odd no.");
    }
    
}
