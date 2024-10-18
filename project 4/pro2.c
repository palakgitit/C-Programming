#include <stdio.h>

void main () 
{
    int i,j,num ;
    printf("enter the num");
    scanf("%d", &num);
    
    for (i=1; i<=4; i++)
    {
        for (j=1; j<=i ; j++)
        {
            printf(" %d ", num);
            num++;
        }
        printf("\n");
    }
}


/*

enter the num 21
 21 
 22  23 
 24  25  26 
 27  28  29  30 

*/