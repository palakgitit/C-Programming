 #include <stdio.h>

void main ()
{
    int i,j,k ;

   
    for (i=1 ; i<=5; i++)
    {
         for (k=i ; k<=4 ; k++)
    {
        printf("  ");
    }
        for (j=6-i; j<=5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}


/*
        5 
      4 5 
    3 4 5 
  2 3 4 5 
1 2 3 4 5 

*/