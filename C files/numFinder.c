#include <stdio.h>
void finder(int a[5],int num)
{
    int is = 0;
    
    for (int i =0; i<5; i++){
        if (num == a[i]){
            is=is +1;
        }
    }
    if (is == 0){
        printf("Not found\n");
    }
    else {
        printf("Found\n");
    }  
}


int main()
{
    int search;
    printf("Enter the number ur srching for\n");
    scanf("%d",&search);
   
    int arr[5] = {0,1,2,3,4};
    finder(arr, search);

}

