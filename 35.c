#include<stdio.h>
int main()
{
	char p[32],count=0,i;
    gets(p);
	for(i=0;p[i]!=NULL;i++)
	{
	if(p[i]>='0' && p[i]<='9')
	count++;
	}
	printf("%d",count);
	return 0;
	}
