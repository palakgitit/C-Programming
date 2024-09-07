// digit counter 
#include<stdio.h>

int main()
{
    int num, count=0;

    printf("enter value:");
    scanf("%d", &num);

    for(int i=1 ; num!=0 ; i++ )
    {
        num/=10;
        count++;
    }
printf(" Sum of the num:- %d", count);

}