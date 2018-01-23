#include<math.h>
int main()
{
	int hr1,min1,hr2,min2,hr,mi;
	printf("\n enter the first time in hrs, min");
	scanf("%d",&hr1);
	scanf("%d",&min1);
	printf("\n enter the second time in hrs ,min");
	scanf("%d",&hr2);
	scanf("%d",&min2);
	hr=abs(hr1-hr2);
	mi=abs(min1-min2);
	printf("\n %d %d",hr,mi);
	return 0;	
}
