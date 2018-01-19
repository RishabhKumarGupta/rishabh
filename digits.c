#include<stdio.h>
int main(){
    int n,i;
    int count=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        n=n/10;
    count++;
    }
    printf("%d",count);
}
  
