#include<stdio.h>
int main(){
    int a[50];
    int sum=0;
    int n,k,i;
    printf("enter n and k");
  scanf("%d\t%d",&n,&k);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
      
  }
  for(i=0;i<k;i++)
  {
  sum=sum+a[i];
 
  }
  printf("%d",sum);
  return 0;
}
