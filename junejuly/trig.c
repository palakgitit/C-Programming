#include <stdio.h>
void main ()

{
  int firstA ,secondA , thirdA ; 

  printf (" first angle :");
  scanf("%d",&firstA);

  printf(" second angle :");
  scanf("%d",&secondA); 

  thirdA= 180 - (firstA + secondA);

  printf(" third angle is : %d", thirdA);

}