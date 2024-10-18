#include<stdio.h>
void main()
{
    int i,j,k,l;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(k=5;k<=9-i;k++)
        {
            printf("  ");
        }
        for(k=3;k>=i-1;k--)
        {
            printf("  ");
        }
        for(l=i;l>=1;l--)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
}

/*

1                 1 
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/