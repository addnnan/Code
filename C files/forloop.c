#include <stdio.h>
int main() 
{
    int num = 10;
    int i;
    printf("Count ");
    for (i = 0; i<=num; i++)
    {
        if (i == num)
        {
            printf("%d.",i);
        }
        
        else 
        {
            printf("%d, ",i);
        }
    }
    return 0;
}
