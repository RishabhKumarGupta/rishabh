#include <stdio.h>
#include <stdlib.h>

int main()
{
    int z,y,i;
    printf("enter 1 number");
    scanf("%d",&z);
    printf("enter 2 number");
    scanf("%d",&y);
    for (i=z;i<y;i++){
            if(i%2!=0){
                printf("%d\t",i);
            }

    }
    return 0;
}
