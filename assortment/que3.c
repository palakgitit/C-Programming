// Develop a Program to find the transpose matrix of a given 2D array. 

#include <stdio.h>
void main ()

{

    // declare the variable 

    int row, column , a[10][10] , i, j ; 


    // taking the data from user 

    printf (" the number of row : ");
    scanf ("%d",&row );

    printf (" the number of column : ");
    scanf ("%d",&column );

    // printing the data and store in array 

    for (i=0 ; i<row ; i++)
    {
        for (j=0 ; j<column ; j++)
        {
            printf (" a[%d][%d] :",i, j);
            scanf ("%d", &a[i][j]);
        }

    }
   
   // in the matrix form in order. ( Output of this form will be not added.)

    printf("matrix form of array : \n"); 

    for (i=0 ; i<row ; i++)
    {
        for (j=0 ; j<column ; j++)
        {
            printf ("%d \t",a[i][j]);
        } 
        printf ("\n"); 
    }

    // transpose version of above matrix. 
    printf("transpose version of matrix: \n"); 

    for (i=0 ; i<row ; i++)
    {
        for (j=0 ; j<column ; j++)
        {
            printf ("%d \t",a[j][i]);
        } 
        printf ("\n"); 
    }



}
