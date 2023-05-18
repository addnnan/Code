#include <stdio.h>
#include <string.h>

int main(void)
{
    char usr[10];
    char pswd[10];
    char ans[10];
    char a1[10] = "yes";
    char a2[10] = "YES";
    char a3[10] = "Yes";
    char nusr[10];
    char npswd[10];


    printf("--> To create account.\nEnter username:\n");
    scanf("%s",usr);

    printf("--> Now enter password:\n");
    scanf("%s",pswd);

    printf("--> Thank you for signing up!\nDo you want to sign in now. Type ( Yes or No )\n");
    scanf("%s",ans);

    int compa = strcmp(ans,a1);
    int compb = strcmp(ans,a2);
    int compc = strcmp(ans,a3);

    if ((compa == 0) || (compb == 0) || (compc == 0))
    {
        printf("--> Type the username to sign in:\n");
        scanf("%s",nusr);
        int comp2 = strcmp(nusr,usr);
        
        if (comp2 == 0)
        {
            printf("--> Type the password:\n");
            scanf("%s",npswd);
            int comp3 = strcmp(npswd,pswd);

            if (comp3 == 0)
            {
                printf("You are successfully loged in. \n");
            }
            else 
            {
                printf("Wrong password!\n");
            }
            
        }
        else
        {
            printf("Wrong username.\n");
            
        }
        
    }
    else
    {
        printf("-->Spelling error.\n");
    }

    return 0;


}
