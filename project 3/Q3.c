// digit addition 
#include<stdio.h>

int main ()
{
    int num, count=0 , first , last;

    printf("Enter value :-");
    scanf("%d",&num);
     last = num%10;

    for (int i=1 ; num!=0 ; i++)
     {
      
        first = num ;
        num = num/10;
        count++;
     }

     printf("\n first=%d,  last=%d",first, last);

     printf("\n Sum total :- %d",first + last);

}