#include<stdio.h>
void main()
{
    int i,j,k,l;

    for(i=5;i>=1;i--)
    {
        for(k=1;k<=i;k++)
        {
            printf("  ");
        }
        for(j=i;j<=5;j++)
        {
            printf("%d ",j);
        }
        for(l=4;l>=i;l--)
        {
         printf("%d ",l);
        }
        printf("\n");
    }
}


/*
         5 
        4 5 4
      3 4 5 4 3
    2 3 4 5 4 3 2
  1 2 3 4 5 4 3 2 1
*/