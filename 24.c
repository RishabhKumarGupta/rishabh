 #include<stdio.h>
int main()
{
int n,a,i,j,temp;
scanf("%d",&n);
int b[n];
printf("\n the input of an array is");
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
}
printf("\n the output of an array is");
for(j=0;j<n;j++)
{
if(b[j+1]<b[j])
{temp=b[j+1];
b[j+1]=b[j];
b[j]=temp;
    
}
}
printf("sorted arrray is");
for(i=0;i<n;i++)
{
    printf("%d",b[i]);
}
}
