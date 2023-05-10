//to get factorial of a number.
//number is 5, i.e; 5!.

#include <stdio.h>
int factorial(int x);

int main()
{
    int new = factorial(5);
    printf("%d",new);
    return 0;
}
//if 5 is input;   1*2*3*4*5 = .. (ans)
int factorial(int x) 
{
    int ans = 1;
    for (int i = 1;i<=x;i++)
    {
        ans = ans * i;   
    }
    return ans;
}
