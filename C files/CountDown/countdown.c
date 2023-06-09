#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define SEC 1

int main()
{
  for (int k =0;k<24;k++){
  
    for (int j =0;j<60;j++){
  
       for(int i = 0;i<60;i++){
       
          if (j == 0){
             if(i == 0 || i == 1){
                printf("%d sec\n",i);
                sleep(SEC);
                system("clear");
             }
             else{
                printf("%d secs\n",i);
                sleep(SEC);
                system("clear");
             }
             
          }
          else if (k == 0){
             if(j == 1 ){
                if (i == 0 || i == 1){
                   printf("%d min %d sec\n",j,i);
	           sleep(SEC);
	           system("clear");
	        }
	        else{
	           printf("%d min %d secs\n",j,i);
	           sleep(SEC);
	           system("clear");
	        }
	           
             }
             else{
                if (i == 0 || i == 1){
	           printf("%d mins %d sec\n",j,i);
	           sleep(SEC);
	           system("clear");
	        }
	        else {
	           printf("%d mins %d secs\n",j,i);
	           sleep(SEC);
	           system("clear");
	        }
	     }
	  }
	  else{
	     if (k == 1){
	        if ((j == 1 || j == 0) && (i == 0 || i == 1)){
	          printf("%d hour %d min %d sec\n",k,j,i);
	          sleep(SEC);
	          system("clear");
	        }
	        else{
	          if (i == 0 || i == 1){
	            printf("%d hour %d mins %d sec\n",k,j,i);
	            sleep(SEC);
	            system("clear");
	          }
	          else{
	            printf("%d hour %d mins %d secs\n",k,j,i);
	            sleep(SEC);
	            system("clear");
	          }
	        }
	     }
	     else{
	        if ((j == 0 || j == 1) && (i == 0 || i == 1)){
	          printf("%d hours %d min %d sec\n",k,j,i);
	          sleep(SEC);
	          system("clear");
	        }
	        else{
	           if (i == 0 || i == 1){
	            printf("%d hours %d mins %d sec\n",k,j,i);
	            sleep(SEC);
	            system("clear");
	           }
	           else{
	            printf("%d hours %d mins %d secs\n",k,j,i);
	            sleep(SEC);
	            system("clear");
	          }
	          
	        }
	        
	     }
	     
	  }
	  
       }
       
    }
    
  }
  return 0;
}
