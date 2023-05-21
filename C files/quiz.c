#include <stdio.h>
int main()
{
    int ans,nques,flag =0, max = 10;
    char ch;
    char ques[][100] = {"* What is the name of fastest animal?","** How many days r there in a week?","*** What is the speed of light?",
                        "**** How many bones r there in human body?","***** What is the strongest force in nature?",
                        "****** Who won the 2022 World Cup Final?","******* Who invented bulb?",
                        "******** How many continents r there in the world.","********* Center part of cell is called _______.",
                        "********** Last planet of our solar system?"};
    char opt[][100] = {"1. Tiger","2. Cheeta","3. Jaguar","4. Elephant","1. Six","2. Eight","3. Seven","4. Five",
                         "1. 3 x 10^8","2. 3 x 10^6","3. 3 x 10^7","4. 3 x 10^9",
                         "1. 209","2. 205","3. 216","4. 206","1. Gravity","2. Nuclear force", "3. Electromagnetic force","4. None of the above",
                         "1. Brazil", "2. Argentina","3. France","4. Germany","1. Einstein","2. Robert Hook", "3. Tesla","4. Thomas Edison",
                         "1. Ten","2. Five","3. Six" ,"4. None of the above", "1. Cytoplasm","2. Cell membrane","3. Nucleus" ,"4. None of the above",
                         "1. Neptune","2. Uranus","3. Jupiter" ,"4. Saturn"};
    int crt[10] = {2,3,1,4,2,2,4,4,3,1};

    printf("  ________________________________\n\n");
    printf("| This is a General Knowledge quiz |\n");
    printf("  ________________________________\n\n");
    printf("Enter the number of questions?  (MAX = 10)\n");
    scanf("%d",&nques);
    if (nques > max ){
        printf("ERROR: Number is  greater than MAX\n");
        
    } else if(nques <= 0){
        printf("Error: Number is less than 1\n");
    } else{
        scanf("%c",&ch);
	    printf("Your First question is:\n\n");
        for (int i = 0; i <nques; i++)
        {
            printf("%s\n",ques[i]);
            for (int j = i*4; j<i*4+4;j++)
            {
                printf("%s\n",opt[j]);
            }
            printf("\n");
            printf("> Enter the ans: ");
            scanf("%d",&ans);
            printf("\n");
            if (ans == crt[i]){
                    printf("---Correct Answer!--\n\n");
                    flag++;
            }
            else{
                printf("---False!---\n");
            }
        }
    if (flag == 0){
        printf("You got none right :(  Try again!\n\n");
    } else if (flag == nques){
        printf("Nailed it! You got %d out of %d right :) (%d%%)\n\n",flag,nques,flag/nques*100);
    } else{
        printf("You got %d out of %d right. (%.1f%%)\n\n",flag,nques,(float)flag/(float)nques*100);
    }
	
    }
	
    return 0;
}     