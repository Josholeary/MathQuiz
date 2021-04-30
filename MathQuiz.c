// Program that simulates a maths quiz name
//  main.c
//  assignment1.c
//Must end gracefully, continually display menu and only show correct and incorrect during the quiz
//  Created by Josh O'Leary on 06/11/2019.
//  Copyright © 2019 Josh O'Leary. All rights reserved.
//

#include <stdio.h>
int main()
{
    
    int menu;
    int numberq;
    int i=0;
    int correct=0;
    int incorrect=0;
    int initiate=0;
    int ans1;
    int ans2;
    int ans3;
    int ans4;
    int ans5;
    
    printf("\n Welcome to the maths quiz game\n");
    printf("--------------------------------------------------------\n");
    
    while (i==0)
    {
        //menu options
        printf("\nMain menu\n");
        printf("Press 1 to select the number of questions you wish to answer\n");
        printf("Press 2 to begin the quiz\n");
        printf("Press 3 to show the correct and incorrect answers this round\n");
        printf("Press 4 to quit the game\n");
        
        scanf("%d", &menu);
    
        //menu function
        switch (menu)
        {//start main switch
                
            case 1:
            {//start main case 1
                
                printf("How many questions would you like to be asked between 1 and 5?");
                scanf("%d",&numberq);
                if (numberq>5||numberq<1)
                {//start if
                    printf("\nInvalid number of questions this quiz only goes between 1-5\n");
                    printf("\n Re-enter the number of questions you wish to answer via the main menu\n");
                }//end if
                break;
            }//end main case 1
            
            case 2:
            {//start main case 2
                initiate ++;
                
                switch (numberq)
                {//start inner switch
                    case 1 :
                    {//start inner case 1
                        //question one start
                        printf("\n  Question 1: 7+4=?");
                        scanf("%d", &ans1);
                        printf("\n Your answer was %d \n", ans1);
                        if (ans1==11)
                        {//start if
                            printf("\nYou are correct\n ");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\nYou are incorrect\n");
                            incorrect--;
                        }//end else
                        //question one end
                        
                        printf("\n You have finished the quiz your score was %d out of 5 questions correctly answered\n", correct);
                        printf("\n Thank you for participating you can now quit the quiz or try again via the main menu\n");
                        correct=0;
                        incorrect=0;
                        initiate=0;

                        break;
                    }//end inner case 1
                        
                    case 2 :
                        {//start inner case 2
                            //question one start
                            printf("\n Question 1: 7+4=?");
                            scanf("%d", &ans1);
                            printf("\n Your answer was %d \n", ans1);
                            if (ans1==11)
                            {//start if
                                printf("\nYou are correct\n ");
                                correct++;
                            }//end if
                            else
                            {//start else
                                printf("\nYou are incorrect, the correct answer was 11 \n");
                                incorrect++;
                            }//end else
                            //question one end
                            
                            //question two start
                            printf("\n Question 2: 12/3=? \n");
                            scanf("%d", &ans2);
                            printf("\n Your answer was %d\n", ans2);
                            if (ans2==4)
                            {//start if
                                printf("\n You are correct\n");
                                correct++;
                            }//end if
                            else
                            {//start else
                                printf("\n You are incorrect, the correct answer was 4\n");
                                incorrect++;
                            }//end else
                            //question two end
                            
                            printf("\n You have finished the quiz your score was %d out of 5 questions correctly answered\n", correct);
                            printf("\n Thank you for participating you can now quit the quiz or try again via the main menu\n");
                            correct=0;
                            incorrect=0;
                            initiate=0;

                            break;
                        }//end inner case 2
                        
                    case 3 :
                    {//start inner case 3
                        //question one start
                        printf("\n Question 1: 7+4=?");
                        scanf("%d", &ans1);
                        printf("\n Your answer was %d \n", ans1);
                        if (ans1==11)
                        {//start if
                            printf("\nYou are correct\n ");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\nYou are incorrect, the correct answer was 11 \n");
                            incorrect++;
                        }//end else
                        //question one end
                        
                        //question two start
                        printf("\n Question 2: 12/3=? \n");
                        scanf("%d", &ans2);
                        printf("\n Your answer was %d\n", ans2);
                        if (ans2==4)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer was 4\n");
                            incorrect++;
                        }//end else
                        //question two end
                        
                        //question three start
                        printf("\n Question 3: (22/11)+3=?\n");
                        scanf("%d", &ans3);
                        printf("\n Your answer was %d\n", ans3);
                        if (ans3==5)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer is 5\n");
                            incorrect++;
                        }//end else
                        //question 3 end
                        
                        printf("\n You have finished the quiz your score was %d out of 5 questions correctly answered\n", correct);
                        printf("\n Thank you for participating you can now quit the quiz or try again via the main menu\n");
                        correct=0;
                        incorrect=0;
                        initiate=0;

                        break;
                    }//end inner case 3
                        
                    case 4 :
                    {//start inner case 4
                
                        //question one start
                        printf("\n Question 1: 7+4=?");
                        scanf("%d", &ans1);
                        printf("\n Your answer was %d \n", ans1);
                        if (ans1==11)
                        {//start if
                            printf("\nYou are correct\n ");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\nYou are incorrect, the correct answer was 11 \n");
                            incorrect++;
                        }//end else
                        //question one end
                        
                        //question two start
                        printf("\n Question 2: 12/3=? \n");
                        scanf("%d", &ans2);
                        printf("\n Your answer was %d\n", ans2);
                        if (ans2==4)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer was 4\n");
                            incorrect++;
                        }//end else
                        //question two end
                        
                        //question three start
                        printf("\n Question 3: (22/11)+3=?\n");
                        scanf("%d", &ans3);
                        printf("\n Your answer was %d\n", ans3);
                        if (ans3==5)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer is 5\n");
                            incorrect++;
                        }//end else
                        //question three end
                        
                        //question four start
                        printf("\n Question 4: 55-25x3=?\n");
                        scanf("%d", &ans4);
                        printf("/n Your answer was %d\n", ans4);
                        if (ans4==90)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer is 90\n");
                            incorrect++;
                        }//end else
                        //question four end
                        
                        printf("\n You have finished the quiz your score was %d out of 5 questions correctly answered\n", correct);
                        printf("\n Thank you for participating you can now quit the quiz or try again via the main menu\n");
                        correct=0;
                        incorrect=0;
                        initiate=0;

                        break;
                    }//end inner case 4
                        
                    case 5 :
                    {//start inner case 5
                        
                        //question one start
                        printf("\n Question 1: 7+4=?");
                        scanf("%d", &ans1);
                        printf("\n Your answer was %d \n", ans1);
                        if (ans1==11)
                        {//start if
                            printf("\nYou are correct\n ");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\nYou are incorrect, the correct answer was 11 \n");
                            incorrect++;
                        }//end else
                        //question one end
                        
                        //question two start
                        printf("\n Question 2: 12/3=? \n");
                        scanf("%d", &ans2);
                        printf("\n Your answer was %d\n", ans2);
                        if (ans2==4)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer was 4\n");
                            incorrect++;
                        }//end else
                        //question two end
                        
                        //question three start
                        printf("\n Question 3: (22/11)+3=?\n");
                        scanf("%d", &ans3);
                        printf("\n Your answer was %d\n", ans3);
                        if (ans3==5)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer is 5\n");
                            incorrect++;
                        }//end else
                        //question three end
                        
                        //question four start
                        printf("\n Question 4: 55-25x3=?\n");
                        scanf("%d", &ans4);
                        printf("\n Your answer was %d\n", ans4);
                        if (ans4==90)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer is 90\n");
                            incorrect++;
                        }//end else
                        //question four end
                        
                        //question five start
                        printf("\n Question 5: (77+33)/10=? \n");
                        scanf("%d", &ans5);
                        printf("\n Your answer was %d\n", ans5);
                        if (ans5==11)
                        {//start if
                            printf("\n You are correct\n");
                            correct++;
                        }//end if
                        else
                        {//start else
                            printf("\n You are incorrect, the correct answer is 11\n");
                            incorrect++;
                        }//end else
                        //question five end
                        
                        printf("\n You have finished the quiz your score was %d out of 5 questions correctly answered\n", correct);
                        printf("\n Thank you for participating you can now quit the quiz or try again via the main menu\n");
                        correct=0;
                        incorrect=0;
                        initiate=0;
                        break;
                    

                    }//end inner case 5
                       
                    
                }//end inner switch
                
            }//end main case 2
            
            case 3:
            {//start main case 3)
                if(initiate==1)
                {
                    printf("\nThe amount of answers you have answered correctly  are %d\n", correct);
                    printf("\nThe amount of questions you have answered incorrectly are %d\n", incorrect);
                }
                else
                {
                    printf("\n You must begin the quiz first\n");
                }
                break;
            }//end main case 3
                
            case 4: // will terminate while loop to gracefully end program
            {//start main case 4
                i++;
                break;
            }//end main case 4
                
            default:
            {//start main default
                printf("\n Invalid input for main menu, try again \n");
                
                
            }
                                
            
        }//end main switch
    }//end while
    
    return 0;
}//end main


