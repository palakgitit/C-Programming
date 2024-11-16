#include <stdio.h>
void main()
{
    int i, j, a[10][10], row, column, rn, cn, cs = 0, rs = 0;

    printf("enter the row:-");
    scanf("%d", &row);

    printf("enter the column:-");
    scanf("%d", &column);

    printf("enter the elements : \n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter the row number :");
    scanf("%d", &rn);

    printf("elements of row %d :", rn);

    for (j = 0; j < column; j++)
    {
        printf("%d", a[rn][j]);
        if (j < column - 1)
        {
            printf(", ");
        }
        rs += a[rn][j];
    }

    printf("\n the number of row %d : %d\n", rn, rs);

    printf("enter the column number :");
    scanf("%d", &cn);

    printf("elements of column %d :", cn);

    for (i = 0; i < row; i++)
    {
        printf("%d", a[cn][i]);
        if (i < row - 1)
        {
            printf(", ");
        }
        cs += a[cn][i];
    }

    printf("\n the number of column %d : %d\n", cn, cs);
}