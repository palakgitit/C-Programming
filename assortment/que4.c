// Develop a Program to print and find the sum of all elements of a given row & column from a 2D array .

#include <stdio.h>
void main ()

{

// declare the variable 
int row , column , i , j ,a[10][10];

// taking the datat from user 

printf(" the array's row : ");
scanf("%d",&row);

printf("the araay's column: ");
scanf ("%d", &column );

// printing the value and index of array 

for (i=0 ; i<row ; i++)
{
    for (j=0 ; j<column ; j++)
    {
        printf("a[%d][%d]",i ,j );
        scanf("%d", &a[i][j]);
    }
}

printf(" enter the number of row: ");
scanf ("%d",&a[i]);

for (i=0 ; i<row; i++)
{
    printf("%d",a[i]);
}




}