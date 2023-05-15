#include <stdio.h>
int main()
{
    int arr[5], n,i,sum = 0;
    printf("Enter array size:\n");
    scanf("%d",&n);
    printf("Enter list of numbers of size %d:\n",n);
    for (i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n; i++){
        //printf("%d\t",arr[i]);
        sum = sum + arr[i];
    }
    printf("Sum of numbers = %d \n",sum);
    return 0;

}
