#include<stdio.h>
int main()
{
	char p[32],count=0,i;
gets(p);
	for(i=0;p[i]!=NULL;i++)
	{
	if(p[i]=='\n'||p[i]=='\t'||p[i]=='.')
	count++;
	}
	printf("%d",count+1);
	return 0;
	}
