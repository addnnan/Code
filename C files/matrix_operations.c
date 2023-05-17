#include<stdio.h>
#include<string.h>
int main()
{
    int a1[10][10];
    int a2[10][10];
    int c[10][10];
    int m,n;
    char opr[100];
    char sum[100] = "+";
    char sub[100] = "-";

    printf("Enter the size of 1st matrix:\n");
    scanf("%d\n%d",&m,&n);
    printf("Now enter %d no. of elements:\n",m*n);

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the size of 2nd matrix:\n");
    scanf("%d\n%d",&m,&n);
    printf("Now enter %d no. of elements:\n",m*n);

    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    printf("The 1st matrix you typed is:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
        {
            printf("[%2d ]",a1[i][j]);
            
        }
        printf("\n");
    }
    printf("And the 2nd matrix you typed is:\n");
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++)
        {
            printf("[%2d ]",a2[i][j]);
            
        }
        printf("\n");
    }
    printf("Now type the matrix operation\n Type( + )for sum & Type( - )for subtraction.\n");
    scanf("%s",opr);
    int result = strcmp(opr,sum);
    int result2 = strcmp(opr,sub);
    if (result == 0)
    {
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<m;j++)
            {
                c[i][j] = a1[i][j] + a2[i][j];
            }
        }
        printf("Addition of Two matrix is:\n");
        for (int i=0;i<m;i++)
        {
            
        for (int j=0;j<n;j++)
        {
            printf("[%2d ]",c[i][j]);
            
        }
        printf("\n");

        }

    }
    else if (result2 == 0)
    {
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<m;j++)
            {
                c[i][j] = a1[i][j] - a2[i][j];
            }
        }
        printf("Subtraction of Two matrix is:\n");
        for (int i=0;i<m;i++)
        {
        for (int j=0;j<n;j++)
        {
            printf("[%2d ]",c[i][j]);
            
        }
        printf("\n");
        }

    }
    else{
        printf("WARNING! You Typed the wrong operator. That is %s \n\n( Try using + or - )\n",opr);
    }

}
