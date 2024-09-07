// Simple grade calculator 

#include<stdio.h>

int main()
{
    int Score;
    char ch;

    printf("enter your value:");
    scanf("%d",&Score);

    ch=Score>90? 'A': 
        Score>80?'B':                           // the first Q. solved 
        Score>70?'C':
        Score>60?'D': 'f';
            
     
    printf("The grade is  %c",ch);

    switch(ch) // ch = the grade above 
    {
    case'A':
    printf(" \n Excellent work! ");
    break;
    case'B':
    printf(" \n well done ");
    break;
    case'C':                                                            // the Q.2 solved here 
    printf ("\n Good job");
    break;
    case'D':
    printf("\n You passed but you could do better");
    break;
    case'f':
    printf("\n Failed, Next time");
    break;
    }

 if ( ch=='f')
{
 printf("\nPlease Try again Next time."); }                         // Q.3 is solved here
 
 else {
 printf("\n Congratulations! You are eligible for the next level");
 }
    
}