//Grade::
#include <stdio.h>
int main()
{
    char grade = 'C';
    switch (grade)
    {
    case 'A':
        printf("You have got very good grade.\n");
        break;
    case 'B':
        printf("You have good grade but work harder to get A.\n");
        break;
    case 'C':
        printf("You have bad grade, try harder.\n");
        break;
    default:
        printf("Not A B or C grade");
    }
}
