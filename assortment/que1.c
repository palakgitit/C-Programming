#include <stdio.h>

void  main ()

{

    int a[10] ,i, size ;
    // the number of element declare 

    printf (" enter the size: ");
    scanf(" %d", &size);

    // insert the value of the element 

    for (i=0 ; i<size; i++)
    {
        printf ("a[%d] : ",i);
        scanf("%d",&a[i]);
    }

    // adding the condition to find the negative from the array. 
    
    printf (" all the negative number from the element : ");

    for (i=0 ;i<size ; i++)
    {
        if(a[i]<0)
        {
            printf("%d,",a[i]);
        }
    }
}   