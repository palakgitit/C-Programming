#include <stdio.h>
void  main ()
{

int  grsalary , bs, HRA , da, ta ; 


printf (" enter your salary :");
scanf("%d",&bs);

HRA= bs * 10 / 100;
da= bs * 8 / 100;
ta= bs * 5 / 100 ; 



grsalary = bs + HRA+ da + ta  ; 

printf (" the amount of gross salary = %d", grsalary);


}