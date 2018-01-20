    printf("enter 1 number");
    scanf("%d",&z);
    printf("enter 2 number");
    scanf("%d",&y);
    for (i=z+1;i<y;i++)
    {
    sum=primenumber(i);
    if(sum==1)
    printf("%d",i);
    }
return 0;
}
int primenumber(int n)
{
int j,sum=1;
for(j=2;j<=n/2;j++)
{
if(n%j==0)
{
sum=0;
break;
}}
return sum;
}
