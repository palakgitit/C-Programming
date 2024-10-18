#include<stdio.h>
void main()
{
    int i;

    for ( i=1; i<=5; i++ )
    {
        if ( i==1 || i==3 )
            printf(" * * * * * ");
        else if ( i==4 || i==5 )
        {
            printf(" *          ");
        }
        else
            printf(" *       * ");
            printf("\n");
    }   
}

/*


 * * * * * 
 *       *
 * * * * *
 *
 *

*/