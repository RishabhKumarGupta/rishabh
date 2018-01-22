#include<stdio.h>
int main(){
    int a[10000];
    int i,n;
    //printf("enter the numbers");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(i=1;i<=n;i++)
    {
        if(a[i]>max)
        {
        max=a[i];
        }
    }
    printf("%d",max);
}
