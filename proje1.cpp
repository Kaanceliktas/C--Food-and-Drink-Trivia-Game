#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

int main(void)


{
    srand(time(NULL));
    int random;
    int questionNumber = 6;
    int arr[questionNumber];
    int score = 0;
    int i;
    int counter = 0;
    
    
    
    mainhome:
     system("cls");
     printf("\t\t\t\t                                                 C FOOD AND DRINK TRIVIA GAME\n");
     printf("\n\t\t\t                                                  ________________________________________");

     printf("\n\t\t\t\t                                                            WELCOME ");
     printf("\n\t\t\t\t                                                               to ");
     printf("\n\t\t\t\t                                                           THE GAME ");
     printf("\n\t\t\t                                                  ________________________________________");
     printf("\n\t\t\t                                                  ________________________________________");
     printf("\n\t\t\t                                                      GUESSING GAME!!!!!!!!!!!    ") ;
     printf("\n\t\t\t                                                  ________________________________________");
     printf("\n\t\t\t                                                  ________________________________________");
     
     sleep(3);
    
    
   
	
    
    for(i = 0; i < questionNumber; i++)
    
    {
    	arr[i] = 0;
    	
	}
   
    

    char answer[100];


    while(true)
    {

	


    switch(rand() % questionNumber)
    {
    	
    	
	




   case 0:   
   
   system("cls");
    	   	
    	if(arr[0] == 1)
    	
    	{
    		
    		continue;
		}// end of if 

    printf("Milk-Ice-Fruits\n");
    printf("Please give the answer:\n");
    scanf("%s",&answer);

    if(strncmp(answer,"milkshake",9)==0)
    {
    	
        printf("!!! YOUR ANSWER IS TRUE !!!\n");
        score++;
        printf("Your Score: %d\n",score);
        sleep(2);
        arr[0] =1;

    } // end of if
    else 
    {
        printf("!-YOUR ANSWER IS NOT TRUE-!\n");
        printf("!-YOU LOST THE GAME-!\n");
        printf("Your Score: %d\n",score);
        break;
    } // end of else
    if(score == questionNumber)
    {
    	
    	exit(1);
	}
    
    
    continue;
    
    
   
    
    
    //------------------------------------------------------------------


    case 1:
    	
    	system("cls");
    	
    	if(arr[1] == 1)
    	
    	{
    		
    		continue;
		}//end of if

    printf("Meat-Bread-Cheese\n");
    printf("Please give the answer:\n");
    scanf("%s",&answer);

    if(strncmp(answer,"cheeseburger",12)==0)
    {
        printf("\n!!! YOUR ANSWER IS TRUE !!!\n");
        score++;
        printf("Your Score: %d\n",score);
        sleep(2);
        arr[1] = 1;
    }// end of if
    else 
    {
        printf("!-YOUR ANSWER IS NOT TRUE-!\n");
        printf("!-YOU LOST THE GAME-!\n");
        printf("Your Score: %d\n",score);
        break;
    } // end of else
    
    
    if(score == questionNumber)
    {
    	
    	exit(1);
	}
    
    continue;
    
    
     //------------------------------------------------------------------



case 2:
	
	system("cls");

    
    	
    	
    	if(arr[2] == 1)
    	
    	{
    		
    		continue;
		}//end of if

    printf("Lays-Ruffles-Doritos\n");
    printf("Please give the answer:\n");
    scanf("%s",&answer);

    if(strncmp(answer,"chips",5)==0)
    {
        printf("\n!!! YOUR ANSWER IS TRUE !!!\n");
        score++;
        printf("Your Score: %d\n",score);
        sleep(2);
        arr[2] = 1;

    }//end of if
    else 
    {
        printf("!-YOUR ANSWER IS NOT TRUE-!\n");
        printf("!-YOU LOST THE GAME-!\n");
        printf("Your Score: %d\n",score);
        break;
    }//end of else
    
    
    
    if(score == questionNumber)
    {
    	
    	exit(1);
	}
    
    
    
    
    continue;

 //------------------------------------------------------------------


case 3:
	
	system("cls");
    
    	 	if(arr[3] == 1)
    	
    	{
    		
    		continue;
		}//end of if

    printf("Leaf-Blacksea-Rize\n");
    printf("Please give the answer:\n");
    
    scanf("%s",&answer);

    if(strncmp(answer,"tea",3)==0)
    {
        printf("\n!!! YOUR ANSWER IS TRUE !!!\n");
        score++;
        printf("Your Score: %d\n",score);
        sleep(2);
        arr[3] = 1;

    }//end of if
    else 
    {
        printf("!-YOUR ANSWER IS NOT TRUE-!\n");
        printf("!-YOU LOST THE GAME-!\n");
        printf("Your Score: %d\n",score);
        break;
    } // end of else
    
    
    
    if(score == questionNumber)
    {
    	
    	exit(1);
	}
    
    
    
    continue;

        
         //------------------------------------------------------------------
         
         
         
         case 4:
    
    
    system("cls");
    	 	if(arr[4] == 1)
    	
    	{
    		
    		continue;
		}//end of if

    printf("Cow-White-Pasteurized\n");
    printf("Please give the answer:\n");
    
    scanf("%s",&answer);

    if(strncmp(answer,"milk",4)==0)
    {
       printf("\n!!! YOUR ANSWER IS TRUE !!!\n");
        score++;
        printf("Your Score: %d\n",score);
        sleep(2);
        arr[4] = 1;

    }//end of if
    else 
    {
        printf("!-YOUR ANSWER IS NOT TRUE-!\n");
        printf("!-YOU LOST THE GAME-!\n");
        printf("Your Score: %d\n",score);
        break;
    } // end of else
    
    
    
    if(score == questionNumber)
    {
    	
    	exit(1);
	}
    
    
    
    continue;

        
         //------------------------------------------------------------------
         
         
         case 5:
    
    
    system("cls");
    	 	if(arr[5] == 1)
    	
    	{
    		
    		continue;
		}//end of if

    printf("Arabica-Americano-Espresso\n");
    printf("Please give the answer:\n");
    
    scanf("%s",&answer);

    if(strncmp(answer,"coffee",5)==0)
    {
        printf("\n!!! YOUR ANSWER IS TRUE !!!\n");
        score++;
        printf("Your Score: %d\n",score);
        sleep(2);
        arr[5] = 1;

    }//end of if
    else 
    {
       printf("!-YOUR ANSWER IS NOT TRUE-!\n");
        printf("!-YOU LOST THE GAME-!\n");
        printf("Your Score: %d\n",score);
        break;
    } // end of else
    
    
    
    if(score == questionNumber)
    {
    	
    	exit(1);
	}
    
    
    
    continue;

        

}// end of switch

break;
        
        
    } // end of while













    return 0;
} // end of main






 
    
