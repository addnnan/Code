// Student details by using structure...

#include <stdio.h>

struct student
{
  int roll_no;
  char name[10];
  float per;
  int marks[20];
};

int main()
{
  int n;
  int sum;
  struct student x[10];
  printf("Enter the number of students.\n");
  scanf("%d",&n);
  
  for (int i = 0;i<n;i++){
    printf("Enter the [NAME] & [ROLL NO] of Student-%d:\n",i+1);
    scanf("%s%d",x[i].name,&x[i].roll_no);
    printf("Enter the marks in 6 subjects.\n");
    sum = 0;

    for (int j = 0; j<6;j++)
    {
      scanf("%d",&x[i].marks[j]);
      sum += x[i].marks[j];
    }
  x[i].per = ((float)sum/600)*100;
  }

  for (int i = 0;i<n;i++){
    printf("\nStudent-%d details: \n``````````````````\n",i+1);
    printf("* Name: %s\n* Roll Number: %d\n* Percentage: %.1f%% \n\n",x[i].name,x[i].roll_no,x[i].per);
  }
return 0;
}
/*
----------------------------------------------
Enter the number of students.
1
Enter the [NAME] & [ROLL NO] of Student-1:
abc
1
Enter the marks in 6 subjects.
100
100
100
100
100
100
----------------------------------------------
    OUTPUT:->

    Student-1 details: 
    * Name: abc
    * Roll Number: 1
    * Percentage: 100.0%
----------------------------------------------
*/

