/*Develop a menu-driven program to implement arithmetic operations such as +, -, *, /, and %
using UDF, switch case, and looping. Make sure that the program is endless until a certain letter
is pressed.*/

#include <stdio.h>

// function declare 

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

int division(int a,int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error! Division by zero is not allowed.");
        return -1;
    }
}

int modulo(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        printf("error! modulo by zero is not allowed.");
        return -1;
    }
}

// main function starting 
int main()
{
    int  num1, num2,choice;
   

    while (1)
    {

        printf("press 1 for +\n");
        printf("press 2 for -\n");
        printf("press 3 for *\n");
        printf("press 4 for /\n");
        printf("press 5 for %\n");
        printf("press 0 for exit\n");

        printf("enter the choice:- ");
        scanf("%d", &choice);

    // conditions for function to function
        if (choice == 0)
        {
            printf("exiting the program:");

            break;
        }

        if (5 == 0)
        {
            printf("enter the integer for modulo:- ");
            scanf("%d", &num1);
            printf("enter the integer for modulo:- ");
            scanf("%d", &num2);
        }
        else
        {
            printf("enter the first num:- ");
            scanf("%d", &num1);
            printf("enter the second num:- ");
            scanf("%d", &num2);
        }

        switch (choice)
        {

        case 1:
            printf("result: %d \n", add(num1, num2));
            break;
        case 2:
            printf("result: %d \n", sub(num1, num2));
            break;
        case 3:
            printf("result: %d \n", multiply(num1, num2));
            break;
        case 4:
            if (division(num1, num2) != -1)
            {
                printf("result: %d \n", division(num1, num2));
            }
            else
            {
                printf("error: division by zero\n");
            }
            break;
        case 5:
            if ((num1, num2) != -1)
            {
                printf("result: %d\n", modulo(num1, num2));
            }
            else
            {
                printf("error: modulo by zero\n");
            }
            break;

        default:
            printf("error: invalid choice\n");
        }
    }
}