// To check who has more mark:
#include <stdio.h>
struct student
  {
    char f_name[20];
    char l_name[20];
    int roll_no;
    int t_marks;
  };

int main()
{
  struct student s[2];
  for (int i =0;i<2;i++){
    printf("Enter the First and Last name of student-%d\n",i+1);
    scanf("%s%s",s[i].f_name,s[i].l_name);
    printf("Now enter the marks obtained by student-%d\n",i+1);
    scanf("%d",&s[i].t_marks);
  }
  for (int j = 0;j<2;j++){
    if (s[j].t_marks <= 100 || s[j+1].t_marks<= 100)
    {
      if (s[j].t_marks > s[j+1].t_marks)
      {
      printf("-> %s %s has more marks.\n",s[j].f_name,s[j].l_name);
      break;
      }
      else if (s[j].t_marks == s[j+1].t_marks)
      {
      printf("-> %s %s & %s %s has same marks.\n",s[j].f_name,s[j].l_name,s[j+1].f_name,s[j+1].l_name);
      break;
      }
      else{
      printf("-> %s %s has more marks.\n",s[j+1].f_name,s[j+1].l_name);
      break;
      }
    }
    else{
      printf("Marks Limit is 100.");
      break;
    }

  }

}
/*OUTPUT:-

  Enter the First and Last name of student-1
  User One
  Now enter the marks obtained by student-1
  94
  Enter the First and Last name of student-2
  User Two
  Now enter the marks obtained by student-2
  95
-> User Two has more marks.

*/
