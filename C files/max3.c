// to get maximum value among three numbers....
#include <stdio.h>
int main()
{
    int x,y,z,max;
    printf("Type Three numbers...\n");
    scanf("%d \n %d \n %d",&x,&y,&z);
    if (x > y)
    {
        if (x > z)
        {
            printf("Max = %d\n", max = x);
        }
        else {
            printf("Max = %d\n", max = z);
        }
    }
    else {
        if (y>z){
            printf("Max = %d\n", max = y);
        }
        else{
            printf("Max = %d\n", max = z);
        }
        
    }
}
