#include <stdio.h>

void main()
{
	int n,r,rev=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev+r*r*r;
		n=n/10;
	
	}
	if(rev==n)
	printf("armstrong");
	else
	printf("not armstrong num");
	
