 #include<stdio.h>
int main()
{
int n,a,i,j,temp;
scanf("%d",&n);
int b[]={1,2,3};
for(i=0;i<2;i++)
{
scanf("%d",&b[i]);
}
for(j=0;j<2;j++)
{
if(b[j+1]<b[j])
{temp=b[j+1];
b[j+1]=b[j];
b[j]=temp;
    
}
}
printf("sorted arrray is");
for(i=0;i<2;i++)
{
    a=b[i]/2;
}
printf("%d",a[b]);
}
