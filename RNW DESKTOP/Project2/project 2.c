#include<stdio.h>

int main()
{
    int Score;
    char ch;

    printf("enter your value:");
    scanf("%d",&Score);

    ch=Score>90? 'A':
             80?'B':
            70?'C':
            60?'D': 'f';
            
    printf("%c",ch);

    
}
// grade calculator 