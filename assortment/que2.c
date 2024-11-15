// Develop a Program to find the largest element from a given 2D array.

#include <stdio.h>

void main ()
{

// variable declare 

    int a[10][10], row , column ,i , j ;

// taking the data from user 

    printf (" the element of row :");
    scanf("%d",&row );

    printf (" the elemnet of column ");
    scanf(" %d", &column);

    // printing the data in array. 

    for (i=0 ; i<row ; i++ )
{
    for (j=0 ; j<column ; j++)
    {
        printf("a[%d][%d]", i,j);
        scanf("%d",&a[i][j]);
    }
}
    // Adding the condition in the array. 
    
    int largest= a[0][0];

    for (i=0 ; i<row ; i++ )
{
    for (j=0 ; j<column ; j++)
    {
        if (a[i][j]> largest)
        {
            largest = a[i][j];
        }
    }

}   printf(" the largest element is : %d", largest );

}