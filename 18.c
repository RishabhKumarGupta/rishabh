#include <stdio.h>

int main()
{
	 int n1=150, n2=160, i, d, rev, r;

  for(i=n1+1; i<n2; ++i)
  {
      d=i;
      rev=0;
      while(d!=0)
      {
          r=(d%10);
          rev+=r*r*r;
          d/=10;
      }
      if(i==rev)
      {
          printf("%d ",i);
      }
  }

	return 0;
}
