// nesting loops : print number in pattern 41 

#include <stdio.h>

void main ()

{

 int i,j ;

 for (i=41; i<=45; i++)
 {
    for (j=41; j<=i; j++)
    {
        printf("%d ",j);
    }
    printf("\n");
 }


}


/*

41 
41 42 
41 42 43 
41 42 43 44 
41 42 43 44 45 

*/